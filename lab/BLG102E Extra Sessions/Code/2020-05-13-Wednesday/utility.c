/*
 * utility.c
 *
 *  Created on: May 13, 2020
 *      Author: tardis
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void displayArray2(int *p, int size)
{
	while (size--) {
		printf("%d ", *p);
		p++;
	}

	printf("\n");
}

void displayArray(int *p, int size)
{
	int k;

	for (k = 0; k < size; k++)
		printf("%d ", *(p + k));
		// printf("%d ", p[k]);

	printf("\n");
}

void randomize()
{
	srand(time(NULL));
}

void setArray(int *p, int size)
{
	int k;

	for (k = 0; k < size; k++)
		p[k] = rand() % 1000;
}

int sumArray(int *p, int size)
{
	int sum = 0;
	int k;

	for (k = 0; k < size; k++)
		sum += p[k];

	return sum;
}


double aveArray(int *p, int size)
{
	return (double) sumArray(p, size) / size;
}

double stdDev(int *p, int size)
{
	double ave = aveArray(p, size);
	double sumSquare = 0.;
	int k;

	for (k = 0; k < size; k++)
		sumSquare = (p[k] - ave) * (p[k] - ave);

	return sqrt(sumSquare / size);
}

void reverseArray2(int *p, int size)
{
	int k;

	for (k = 0; k < size / 2; k++)
		swap(p + k, p + size - 1 - k);
}

void reverseArray(int *p, int size)
{
	int *ptr_end = p + size - 1;

	size /= 2;

	while (size--) {
		swap(p, ptr_end);
		p++;
		ptr_end--;
	}
}

int *getMinArray(int *p, int size)
{
	int *pmin = p;
	int k;

	for (k = 0; k < size; k++)
		if (p[k] < *pmin)
			pmin = &p[k];

	return pmin;
}

int *getMaxArray(int *p, int size)
{
	int *pmax = p;
	int k;

	for (k = 0; k < size; k++)
		if (p[k] > *pmax)
			pmax = &p[k];

	return pmax;
}

int getMin(int *p, int size)
{
	int min = p[0];
	int k;

	for (k = 1; k < size; k++)
		if (p[k] < min)
			min = p[k];

	return min;
}

int getMax(int *p, int size)
{
	int max = p[0];
	int k;

	for (k = 1; k < size; k++)
		if (p[k] > max)
			max = p[k];

	return max;
}

void selectionSort(int *p, int size)
{
	int k;

	for (k = 0; k < size - 1; k++)
		// swap(p + k, getMinArray(p + k, size - k));
		swap(&p[k], getMinArray(&p[k], size - k));
}
