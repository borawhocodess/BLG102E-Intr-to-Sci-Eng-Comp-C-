/*
 * my_strcpy.c
 *
 *  Created on: May 6, 2020
 *      Author: tardis
 */
#include <stdio.h>
#include <string.h>

int main()
{
	char str[20], copy_str[20];

	printf("Enter a sentence: ");
	fgets(str, 20, stdin);

	printf("Entered sentence is: %s \n", str);
	printf("Length is: %d \n", strlen(str));

	strcpy(copy_str, str);
	printf("Copy of the sentence is: %s \n", &copy_str[0]);

	return 0;
}


