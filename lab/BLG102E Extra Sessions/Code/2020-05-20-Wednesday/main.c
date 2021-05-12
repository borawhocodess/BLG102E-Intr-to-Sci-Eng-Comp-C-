/*
 * main.c
 *
 *  Created on: May 20, 2020
 *      Author: tardis
 */
#include <stdio.h>
#include <string.h>
#include "utility.h"

#define EXIT_SUCCESS 0
#define MY_NULL_POINTER ((void *) 0)
#define SIZE 8

int main()
{
	char *pnames[SIZE] = {
				"yarisan17",
				"denizm17",
				"kapucut18",
				"yurdakul17",
				"allahverdi",
				"okumus15",
				"akyildizer16",
				"orneke16"
	};

	printf("*pnames: %s \n", pnames[0]);
	printf("*pnames: %s \n", *pnames);
	printf("*pnames: %s \n", *&pnames[0]);
	printf("**pnames: %c \n", **pnames);

	return EXIT_SUCCESS;
}
