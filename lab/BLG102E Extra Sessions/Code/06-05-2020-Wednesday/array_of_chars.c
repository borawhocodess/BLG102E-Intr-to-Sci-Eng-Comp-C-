/*
 * array_of_chars.c
 *
 *  Created on: May 6, 2020
 *      Author: tardis
 */
#include <stdio.h>

int main()
{
	char word[] = {'D', 'a', 'r', 'l', 'i', 'n', 'g', '!', '\0'};
	int i; // -std=c99

	for (i = 0; i < 9; i++) {
		printf("%c", word[i]);
	}

	printf("\n");

	printf("%s", &word[0]);
	// printf("%s", word);

	return 0;
}

