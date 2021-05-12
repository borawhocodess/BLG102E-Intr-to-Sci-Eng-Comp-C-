/*
 * utility.h
 *
 *  Created on: May 13, 2020
 *      Author: tardis
 */

#ifndef UTILITY_H_
#define UTILITY_H_

// 13.05.2020 Wednesday
void swap(int *a, int *b);
void displayArray(int *p, int size);
void displayDoubleArray(double *p, int size);
void displayArray2(int *p, int size);
void randomize();
void setRandomArray(int *p, int size);
int sumArray(int *p, int size);
double aveArray(int *p, int size);
double stdDev(int *p, int size);
void reverseArray2(int *p, int size);
void reverseArray(int *p, int size);
int getMax(int *p, int size);
int getMin(int *p, int size);
int *getMaxArray(int *p, int size);
int *getMinArray(int *p, int size);
void selectionSort(int *p, int size);


// 20.05.2020 Wednesday
int *searchVal(const int *ptr, int size, int sval);
char *my_gets(char *p);
char *my_gets_2(char *p);
void my_puts(const char *p);
void rputs(const char *p);
char *strchr1(const char *p, int ch);
char *strchr2(const char *p, int ch);
int strcmp1(const char *p1, const char *p2);
char *strpbrk1(const char *p, const char *pcon);
int isAtEnd(const char *p1, const char *p2);
void displayNames(char **p, int size);
void sortNames(char **p, int size);

void sswap(char **p1, char **p2);
void gswap(void *vp1, void *vp2, size_t n);



// 30.05.2020 Saturday
void *memset1(void *vp, int val, size_t n);
void *memcpy1(void *vpdest, const void *vpsource, size_t n);
void *memchr1(const void *vp, int val, size_t n);
void *memchr2(const void *vp, int val, size_t n);
int memcmp1(const void *vp1, const void *vp2, size_t n);

void gReverse(void *vp, size_t size, size_t width);
void *gSearch(const void *vpArray, size_t size, size_t width, const void *vpval);

void swapStr(char *p1, char *p2);
char *getname();

char *strcon(const char *p1, const char *p2);












#endif /* 13_MAY_20_WEDNESDAY_UTILITY_H_ */
