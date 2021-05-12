#include <stdio.h>

int main()
{
	/* Objective:
	 * For a given date, determine which weekday (Monday through Sunday) the
     * date corresponds to, and how many times the given day-and-month falls on the same
     * weekday starting with the next year and ending on a given year.
     */

	/* variables */

	int given_year, given_month, given_day;
	int year, m, q, j, k;
	int end_year;
	int same_year;
	int same = 0;


	/* 1. Get a date from the user */

	printf("Enter date [year month day]: ");
	scanf("%d %d %d", &given_year, &given_month, &given_day);


	/* 2. Check whether the date is valid.
	(Hint: Determine the maximum number of daysin the given month.
	You can assume that the user will never enter Feb 29.)
	If the date is invalid, report it and end the program with a failure code. */

	if (given_month > 12)
	{
		printf("Invalid date.\n");
		return 1;
	}

	switch(given_month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (given_day > 31)
			{
				printf("Invalid date.\n");
				return 1;
			}
			break;
		case 2:
			if (given_day > 29)
			{
				printf("Invalid date.\n");
				return 1;
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (given_day > 30)
			{
				printf("Invalid date.\n");
				return 1;
			}
			break;
	}


	/* 3. Get an end year from the user */

	printf("Enter end year: ");
	scanf("%d", &end_year);


	/* 4. Determine the day of the week and print it */

	year = given_year;
	m = given_month;
	q = given_day;

	if ( m == 1 || m == 2)
	{
		year = year - 1;
		m = m + 12;
	}

	k = year % 100;
	j = year / 100;

	//Zeller’s congruence

	int formula = ((q + ((13*(m+1))/5) + k + (k/4) + (j/4) + (5*j)) % 7);

	/**
	 * q is the day.
     * m is the month.
     * But if the month is January or February, we add 12 to the month and subtract 1 from the year.
     * j is the zero-based century of the year.
     * In a 4-digit year, this is the rst two digits.
     * k is the o set of the year within its century.
     * In a 4-digit year, this is the last two digits.
     *
     * Formula's results:
     * 0 = saturday
     * 1 = sunday
     * 2 = monday
     * 3 = tuesday
     * 4 = wednesday
     * 5 = thursday
     * 6 = friday
     */

	switch(formula)
	{
		case 0:
			printf("It's a Saturday.\n");
			break;
		case 1:
			printf("It's a Sunday.\n");
			break;
		case 2:
			printf("It's a Monday.\n");
			break;
		case 3:
			printf("It's a Tuesday.\n");
			break;
		case 4:
	    	printf("It's a Wednesday.\n");
	    	break;
	    case 5:
			printf("It's a Thursday.\n");
			break;
		case 6:
			printf("It's a Friday.\n");
			break;
	}


	/* 5. For the remaining years as described above,
	count how many of the sameday-and-month fall on the same weekday
	and print the result */

	same_year = given_year + 1;

	for (int a = same_year; a <= end_year; ++a)
	{
		m = given_month;
		q = given_day;
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

	printf("Same day-and-month on same weekday between %d and %d: %d\n", same_year, end_year, same);


	/* 6. End the program with a success code */

	return 0;
}