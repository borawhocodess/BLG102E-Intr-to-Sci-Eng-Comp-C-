/*
 * utility.h
 *
 *  Created on: May 13, 2020
 *      Author: tardis
 */

#ifndef UTILITY_H_
#define UTILITY_H_

void swap(int *a, int *b);
void displayArray(int *p, int size);
void displayArray2(int *p, int size);
void randomize();
void setArray(int *p, int size);
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


#endif /* 13_MAY_20_WEDNESDAY_UTILITY_H_ */
