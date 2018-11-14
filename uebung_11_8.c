#include <stdio.h>

char *DAYS[] = {
	"Sonntag",
	"Montag",
	"Dienstag",
	"Mittowch",
	"Donnerstag",
	"Freitag",
	"Samstag"
};

int main() {
	int day, month, year, week_day;

	printf("Bitte geben Sie ein Jahr ein: ");
	scanf("%d", &year);
	printf("Bitte geben Sie einen Monat ein: ");
	scanf("%d", &month);
	printf("Bitte geben Sie einen Tag ein: ");
	scanf("%d", &day);

	if (month <= 2) {
		year--;
		month += 12;
	}
	week_day = (day + 2 * month + (3 * month + 3) / 5 + year + year / 4 - year / 100 + year / 400 + 1) % 7;
	printf("Am %d-%d-%d war ein %s.\n", day, month, year, DAYS[week_day]);
	return 0;
}
