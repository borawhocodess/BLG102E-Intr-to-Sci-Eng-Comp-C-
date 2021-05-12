#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	printf("- init:\n"
	"    run: rm -f assignment1\n"
	"    blocker: true\n");

	printf("\n");

	printf("- build:\n"
	"    run: gcc -std=c99 -Wall -Werror assignment1.c -o assignment1  # timeout: 2\n"
	"    blocker: true\n");

	printf("\n");

	int given_year, given_month, given_day;
	int year, m, q, j, k;
	int end_year;
	int same_year;
	int same = 0;

	srand(time(NULL));


	for (int i = 0; i < 91; ++i)
	{
		given_year = (rand() % 210) + 1895;
		given_month = (rand() % 12) + 1;

		int day_count = 1;

		switch(given_month)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				day_count = 31;
				break;
			case 2:
				day_count = 29;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				day_count = 30;
				break;
		}

		given_day = (rand() % day_count) + 1;

		end_year = given_year + 1 + (rand() % 147);

		int more_month;

		year = given_year;
		more_month = given_month;
		q = given_day;
		same_year = year + 1;
	
		printf("- case_%d_%d_%d_%d:\n"
		"    run: ./assignment1\n"
		"    points: 1\n"
		"    script:\n"
		"        - expect: \"Enter date \\\\[year month day\\\\]: \"  # timeout: 2\n"
		"        - send: \"%d %d %d\"\n"
		"        - expect: \"Enter end year: \"                   # timeout: 2\n"
		"        - send: \"%d\"\n", year, more_month, q, end_year, year, more_month, q, end_year);

		m = more_month;

				if ( m == 1 || m == 2)
				{
					year = year - 1;
					m = m + 12;
				}

				k = year % 100;
				j = year / 100;

				int formula = ((q + ((13*(m+1))/5) + k + (k/4) + (j/4) + (5*j)) % 7);

				switch(formula)
				{
					case 0:
						printf("        - expect: \"It's a Saturday.\\r\\n\"                 # timeout: 2\n");
						break;
					case 1:
						printf("        - expect: \"It's a Sunday.\\r\\n\"                 # timeout: 2\n");
						break;
					case 2:
						printf("        - expect: \"It's a Monday.\\r\\n\"                 # timeout: 2\n");
						break;
					case 3:
						printf("        - expect: \"It's a Tuesday.\\r\\n\"                 # timeout: 2\n");
						break;
					case 4:
	    				printf("        - expect: \"It's a Wednesday.\\r\\n\"                 # timeout: 2\n");
	    				break;
	    			case 5:
						printf("        - expect: \"It's a Thursday.\\r\\n\"                 # timeout: 2\n");
						break;
					case 6:
						printf("        - expect: \"It's a Friday.\\r\\n\"                 # timeout: 2\n");
						break;
				}

				same_year = given_year + 1;

				for (int a = same_year; a <= end_year; ++a)
				{
					m = more_month;
					int yyyy = a;

					if ( m == 1 || m == 2)
					{
						yyyy = yyyy - 1;
						m = m + 12;
					}

					k = yyyy % 100;
					j = yyyy / 100;

					int checker = ((q + ((13*(m+1))/5) + k + (k/4) + (j/4) + (5*j)) % 7);

					if (checker == formula)
					{
						same = same + 1;
					}
				}

				printf("        - expect: \"Same day-and-month on same weekday between %d and %d: %d\\r\\n\"  # timeout: 2\n"
				"        - expect: _EOF_  # timeout: 2\n"
				"    exit: 0\n", same_year, end_year, same);

				m = more_month;
				year = given_year;
				same = 0;

				printf("\n");
	}

	printf("\n");

	for (int i = 0; i < 8; ++i)
	{
		int ay, gun;

		switch(i)
		{
			case 0: ay = 13; gun = 13;break;
			case 1: ay = 13; gun = 32;break;
			case 2: ay = 14; gun = 28;break;
			case 3: ay = 1; gun = 32;break;
			case 4: ay = 2; gun = 30;break;
			case 5: ay = 3; gun = 32;break;
			case 6: ay = 4; gun = 31;break;
			case 7: ay = 11; gun = 31;break;			 
		}

		printf("- case_invalid_%d_%d:\n"
		"    run: ./assignment1\n"
		"    points: 1\n"
		"    script:\n"
		"        - expect: \"Enter date \\\\[year month day\\\\]: \"  # timeout: 2\n"
		"        - send: \"2020 %d %d\"\n"
		"        - expect: \"Invalid date.\\r\\n\"                  # timeout: 2\n"
		"        - expect: _EOF_                                # timeout: 2\n"
		"    exit: 1\n", ay, gun, ay, gun);

		printf("\n");
	}


	return 0;
}