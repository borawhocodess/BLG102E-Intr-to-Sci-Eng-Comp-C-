/*
 * convert_upper_case.c
 *
 *  Created on: May 6, 2020
 *      Author: tardis
 */
#include <stdio.h>
#include <ctype.h>

int main()
{
	char str[20];
	char *ptr;
	int diff = 'a' - 'A';

	printf("Enter a sentence: ");
	fgets(str, 20, stdin);

	ptr = str;

	printf("Entered sentence is: %s \n", ptr);

	printf("Upper case format: ");

	while (*ptr != '\0') {
		if ((*ptr >= 'a') && (*ptr <= 'z'))
			printf("%c", *ptr - diff);
		else
			printf("%c", *ptr);

		ptr++;
	}

	ptr = str;
	while (*ptr != '\0') {
			if ((*ptr >= 'a') && (*ptr <= 'z'))
				printf("%c", toupper(*ptr));
			else
				printf("%c", *ptr);

			ptr++;
		}

	return 0;
}

// OUTPUT
//Enter a sentence: nese gunes
//Entered sentence is: nese gunes
//
//Upper case format: NESE GUNES
//NESE GUNES

