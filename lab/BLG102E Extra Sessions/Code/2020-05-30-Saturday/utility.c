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
#include <string.h>

#define MY_NULL_POINTER ((void *) 0)

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

void displayDoubleArray(double *p, int size)
{
	int k;

	for (k = 0; k < size; k++)
		printf("%f ", *(p + k));

	printf("\n");
}


void randomize()
{
	srand(time(NULL));
}

void setRandomArray(int *p, int size)
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

// 20.05.2020
int *searchVal(const int *ptr, int size, int sval)
{
	while (size--) {
		if (*ptr == sval)
			return (int *) ptr;
		ptr++;
	}

	// NULL pointer
	return MY_NULL_POINTER; //  null character: '\0'
}

char *my_gets(char *p)
{
	int ch;
	char *ptemp = p;

	ch = getchar();

	while (ch != '\n') {
		*p = ch;
		p++;
		ch = getchar();
	}

	*p = '\0'; // nese gunes 2020'\0'

	return ptemp;
}

char *my_gets_2(char *p)
{
	int ch;
	char *ptemp = p;

	while ((ch = getchar()) != '\n') {
		*p++ = ch;
	}

	*p = '\0'; // nese gunes 2020'\0'

	return ptemp;
}

void my_puts(const char *p)
{
	int k;

	for (k = 0; p[k] != '\0'; k++)
		printf("%c", p[k]);

	printf("\n");
}

void rputs(const char *p)
{
	int len = strlen(p);
	int k;

	for (k = len - 1; k >= 0; k--)
		printf("%c ", p[k]);

	printf("\n");
}

char *strchr1(const char *p, int ch)
{
	int k;

	for (k = 0; p[k] != '\0'; k++)
		if (p[k] == ch)
			return (char *) (p + k);

	if (ch == '\0')
		return (char *) (p + k);

	return MY_NULL_POINTER;
}

char *strchr2(const char *p, int ch)
{
	while (*p != '\0') {
		if (*p == ch)
			return (char *)p;
		p++;
	}

	if (ch == '\0')
		return (char *) p;

	return MY_NULL_POINTER;
}


int strcmp1(const char *p1, const char *p2) // "necati", "ayse"
{
	while (*p1 == *p2) {
		if (*p1 == '\0')
			return 0;
		p1++;
		p2++;
	}

	return *p1 - *p2; // 'n' - 'g' ---> 110 - 101 = 9
}

char *strpbrk1(const char *p, const char *pcon)
{
	int k;

	for (k = 0; p[k] != '\0'; k++)
		if (strchr1(pcon, p[k]))
			return (char *) (p + k);

	return NULL;
}

int isAtEnd(const char *p1, const char *p2)
{
	size_t len1 = strlen(p1);
	size_t len2 = strlen(p2);

	// murat       s2: at
	if (len2 > len1)
		return 0;

	return !strcmp1(p1 + len1 - len2, p2);
}

void displayNames(char **p, int size)
{
	int k;

	for (k = 0; k < size; k++)
		printf("%s ", p[k]);

	printf("\n");
}

void sswap(char **p1, char **p2)
{
	char *ptemp = *p1;
	*p1 = *p2;
	*p2 = ptemp;
}

void sortNames(char **p, int size)
{
	int i, k;

	for (i = 0; i < size - 1; i++)
		for (k = 0; k < size - 1 - i; k++)
			if (strcmp1(p[k], p[k + 1]) > 0)
				sswap(p + k, p + k + 1);
}

void gswap(void *vp1, void *vp2, size_t n)
{
	char *p1 = vp1;
	char *p2 = vp2;

	while (n--) {
		char temp = *p1;
		*p1++ = *p2;
		*p2++ = temp;
	}
}

// 30.05.2020 Saturday
void *memset1(void *vp, int val, size_t n)
{
	char *p = (char *) vp;

	while (n--)
		*p++ = val;

	return vp;
}

void *memcpy1(void *vpdest, const void *vpsource, size_t n)
{
	char *pdest = (char *)vpdest;
	char *psource = (char *)vpsource;

	while (n--)
		*pdest++ = *psource++;

	return vpdest;
}

void *memchr1(const void *vp, int val, size_t n)
{
	char *p = (char *)vp;
	int k;

	for (k = 0; k < n; k++)
		if (p[k] == val)
			return (p + k);
			// return (&p[k]);

	return NULL;
}

void *memchr2(const void *vp, int val, size_t n)
{
	char *p = (char *)vp;

	while (n--) {
		if (*p == val)
			return p;
		p++;
	}

	return NULL;
}

int memcmp1(const void *vp1, const void *vp2, size_t n)
{
	unsigned char *p1 = (unsigned char *)vp1;
	unsigned char *p2 = (unsigned char *)vp2;

	while (n--) {
		if (*p1 != *p2)
			return *p1 > *p2 ? 1 : -1;
		p1++, p2++;
	}

	return 0;
}

void gReverse(void *vp, size_t size, size_t width)
{
	char *p = (char *)vp;
	size_t k;

	for (k = 0; k < size / 2; k++)
		gswap(p + k * width, p + (size - 1 - k) * width, width); // p[k] and p[size - 1 - k] reverse
}

void *gSearch(const void *vpArray, size_t size, size_t width, const void *vpval)
{
	char *p = (char *)vpArray;
	size_t k;

	for (k = 0; k < size; k++)
		if (memcmp1(p + k * width, vpval, width) == 0)
			return p + k * width;

	return NULL; // (void *) 0
}

void swapStr(char *p1, char *p2)
{
	char temp[40];

	strcpy(temp, p1);
	strcpy(p1, p2);
	strcpy(p2, temp);
}

char *getname()
{
	char str[100];
	char *pd;

	printf("Enter a name: ");
	scanf("%s", str);

	pd = (char *)malloc(strlen(str));
	if (pd == NULL) {
		printf("can not allocate memory... \n");
		exit(EXIT_FAILURE);
	}

	// pd = strcpy(pd, str);

	return strcpy(pd, str);
}

char *strcon(const char *p1, const char *p2)
{
	char *pd;

	pd = (char *)malloc(strlen(p1) + strlen(p2));
	if (pd == NULL) {
		printf("can not allocate memory... \n");
		exit(EXIT_FAILURE);
	}

	pd = strcat(strcpy(pd, p1), p2);

	return pd;
}
