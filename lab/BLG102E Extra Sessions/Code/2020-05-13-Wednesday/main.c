/*
 * main.c
 *
 *  Created on: May 13, 2020
 *      Author: tardis
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "utility.h"

#define SIZE 10

int a[10] = {0};

int *func()
{
	return a;
}

int main()
{
	++func()[3];

	printf("a[3] =  %d \n", a[3]);

	return 0;
}


