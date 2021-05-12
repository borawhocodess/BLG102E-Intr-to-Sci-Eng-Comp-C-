/*
 * main.c
 *
 *  Created on: May 30, 2020
 *      Author: tardis
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "utility.h"

#define SIZE 7

int main()
{
	char s1[100];
	char s2[100];
	char *pd;

	printf("Enter two words: ");
	scanf("%s%s", s1, s2);

	pd = strcon(s1, s2); // using malloc

	my_puts(pd);
	// strrev(pd);
	gReverse(pd, strlen(pd), sizeof(char));
	my_puts(pd);

	// avoid overflow in memory
	free(pd);

	return 0;
}


