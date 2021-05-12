/*
 * separate_sentence_into_words.c
 *
 *  Created on: May 6, 2020
 *      Author: tardis
 */
#include <stdio.h>

int main()
{
	char *ptr_sentence = "What a beautiful day!";
	char *ptr;
	int i = 1;

	printf("Sentence is: %s \n", ptr_sentence);

	printf("\n%d. word is: ", i++);
	for (ptr = ptr_sentence; *ptr != '\0';) {
		if (*ptr == ' ')
			printf("\n%d. word is: ", i++);
		else
			printf("%c", *ptr);
		ptr++;
	}

	return 0;
}


