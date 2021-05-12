/*
 * reverse_array.c
 *
 *  Created on: May 6, 2020
 *      Author: tardis
 */
#include <stdio.h>

int main()
{
	char word[15];
	char *ptr;

	printf("Enter a word: ");
	scanf("%s", &word[0]);
	// scanf("%s", word);

	for (ptr = &word[0]; *ptr != '\0'; ptr++) {
		printf("%c", *ptr);
	}

	printf("\n");

	while (ptr-- != word) {
		printf("%c", *ptr);
	}

	return 0;
}
