#include <unistd.h>
#include <curses.h>

#define FIELD_WIDTH 40
#define FIELD_HEIGHT 15
#define RACKET_HEIGHT 3
#define SCORE_LIMIT 10

int pos_p1, pos_p2, pos_x_ball, pos_y_ball, vec_x_ball, vec_y_ball, score_p1,
	score_p2;

void init();
void place_paddles();
void place_ball(int);
void print_field();
void key_processing();
void move_ball();
void detect_collision();
int detect_ball_out();
int play_round();
void ai_opponent();

int main() {
	int round_winner;

	score_p1 = 0;
	score_p2 = 0;
	round_winner = 0;

	init();
	place_paddles();

	while (score_p1 < SCORE_LIMIT && score_p2 < SCORE_LIMIT) {
		place_ball(round_winner == 2 ? -1 : 1);
		round_winner = play_round();
		if (round_winner == 1)
			score_p1++;
		else if (round_winner == 2)
			score_p2++;
	}

	endwin();

	printf("Spieler %d hat gewonnen.\n", score_p1 > score_p2 ? 1 : 2);

	return 0;
}

void init() {
	initscr();
	noecho();
	cbreak();
	keypad(stdscr, true);
	nodelay(stdscr, true);
}

void place_paddles() {
	pos_p1 = (FIELD_HEIGHT / 2) - RACKET_HEIGHT / 2;
	pos_p2 = (FIELD_HEIGHT / 2) - RACKET_HEIGHT / 2;
}

void place_ball(int vec_x) {
	pos_x_ball = FIELD_WIDTH / 2;
	pos_y_ball = FIELD_HEIGHT / 2;
	vec_x_ball = vec_x;
	vec_y_ball = 1;
	
}

void print_field() {
	int i, j;

	clear();

	/* Score */
	printw("\n");
	printw("Player_1  %d - %d  Player_2\n", score_p1, score_p2);
	printw("\n");

	/* Top Border */
	printw("+");
	for (i = 1; i < FIELD_WIDTH - 1; i++)
		printw("-");
	printw("+\n");

	/* Field */
	for (i = 1; i < FIELD_HEIGHT - 1; i++) {
		printw("|");
		for (j = 1; j < FIELD_WIDTH - 1; j++) {
			if (j == 1 && i >= pos_p1 && i < pos_p1 + RACKET_HEIGHT)
				printw("#");
			else if (j == FIELD_WIDTH - 2 && i >= pos_p2 &&
					i < pos_p2 + RACKET_HEIGHT)
				printw("#");
			else if (i == pos_y_ball && j == pos_x_ball)
				printw("*");
			else
				printw(" ");
		}
		printw("|\n");
	}

	/* Bottom Border */
	printw("+");
	for (i = 1; i < FIELD_WIDTH - 1; i++)
		printw("-");
	printw("+\n");

	refresh();
}

void key_processing() {
	int ch, dir;
	int *pos;

	ch = getch();
	switch(ch) {
	case 'w':
		pos = &pos_p1;
		dir = -1;
		break;
	case 's':
		pos = &pos_p1;
		dir = 1;
		break;
	case KEY_UP:
		pos = &pos_p2;
		dir = -1;
		break;
	case KEY_DOWN:
		pos = &pos_p2;
		dir = 1;
		break;
	default:
		return;
	}

	if (*pos + dir > 0 && *pos + dir < FIELD_HEIGHT - RACKET_HEIGHT)
		*pos += dir;
}

void move_ball() {
	pos_x_ball += vec_x_ball;
	pos_y_ball += vec_y_ball;
}

void detect_collision() {
	if (pos_y_ball <= 1 || pos_y_ball >= FIELD_HEIGHT - 1)
		vec_y_ball *= - 1;

	if (pos_x_ball == 2 && pos_y_ball >= pos_p1 &&
			pos_y_ball <= pos_p1 + RACKET_HEIGHT)
		vec_x_ball *= -1;
	else if (pos_x_ball == FIELD_WIDTH - 2 && pos_y_ball >= pos_p2 &&
			pos_y_ball <= pos_p2 + RACKET_HEIGHT)
		vec_x_ball *= -1;
}

int detect_ball_out() {
	if (pos_x_ball == 1)
		return 2;
	if (pos_x_ball == FIELD_WIDTH - 1)
		return 1;
	return 0;
}

int play_round() {
	int p = 0, i = 0;

	while (!(p = detect_ball_out())) {
		print_field();
		key_processing();
		if (i % 5 == 0)
			move_ball();
		detect_collision();
		usleep(20 * 1000);
		i++;
	}

	return p;
}
