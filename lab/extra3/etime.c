#include <stdio.h>

typedef struct{
	int hour; 
	int minute; 
	int second; 
}Time; 

typedef struct{
	int day; 
	int month; 
	int year; 
}Date; 

typedef struct{
	Time time; 
	Date date; 
}ExtendedTime; 

int addTime(Time * op1, Time * op2, Time * op3)
{
	int c =0; 
	op3->second = op1->second + op2->second; 
	c = op3->second / 60; 
	op3->second = op3->second % 60; 

	op3->minute = op1->minute + op2->minute;//+c 
	op3->minute += c; 
	c = op3->minute / 60; 
	op3->minute = op3->minute % 60; 
	
	op3->hour = op1->hour + op2->hour;//+c 
	op3->hour += c; 
	c = op3->hour / 24; 
	op3->hour = op3->hour % 24; 

	return c; 
}

int subtractTime(Time * op1, Time * op2, Time * op3)
{
	int c = 0; 
	op3->second = op1->second - op2->second; 
	op3->second += 60; 
	c = op3->second / 60 - 1; 
	op3->second = op3->second % 60; 

	op3->minute = op1->minute - op2->minute; 
	op3->minute += c; 
	op3->minute += 60; 
	c = op3->minute / 60 - 1; 
	op3->minute = op3->minute % 60; 

	op3->hour = op1->hour - op2->hour; 
	op3->hour += c; 
	op3->hour += 24; 
	c = op3->hour / 24 - 1; 
	op3->hour = op3->hour % 24; 
	
	return c; 
}

//ASSUME MONTHS HAVE 30 DAYS 
void addDate(Date * op1, Date * op2, Date * op3, int carry)
{
	int c = 0; 
	op3->day = op1->day + op2->day + carry; 
	c = op3->day / 30; 
	op3->day = op3->day % 30; 

	op3->month = op1->month + op2->month;
	op3->month += c; 
	c = op3->month / 12; 
	op3->month = op3->month % 12; 

	op3->year = op1->year + op2->year; 
	op3->year += c; 
}

void subtractDate(Date * op1, Date * op2, Date * op3, int borrow)
{
	int c = 0; 
	op3->day = op1->day - op2->day + borrow;
	op3->day += 30; 
	c = op3->day / 30 - 1; 
	op3->day = op3->day % 30; 	

	op3->month = op1->month - op2->month;
	op3->month += c; 
	op3->month += 12; 
	c = op3->month / 12 - 1; 
	op3->month = op3->month % 12;

	op3->year = op1->year - op2->year; 
	op3->year += c; 
}

void addExtendedTime(ExtendedTime * op1, ExtendedTime * op2, ExtendedTime * op3)
{
	int c = addTime(&(op1->time), &(op2->time), &(op3->time)); 
	addDate(&(op1->date), &(op2->date), &(op3->date), c); 
}

void subtractExtendedTime(ExtendedTime * op1, ExtendedTime * op2, ExtendedTime * op3)
{
	int c = subtractTime(&(op1->time), &(op2->time), &(op3->time)); 
	subtractDate(&(op1->date), &(op2->date), &(op3->date), c); 
}

void printExtendedTime(ExtendedTime *e_time)
{
	printf("Extended Time is: %02d/%02d/%04d %02d:%02d:%02d\n", (*e_time).date.day
																,(*e_time).date.month
																,(*e_time).date.year
																,e_time->time.hour//(*e_time).time.hour 
																,e_time->time.minute//(*e_time).time.minute
																,e_time->time.second); 
}

int main ()
{

	ExtendedTime a; 
	a.time.hour = 5; 
	a.time.minute = 45; 
	a.time.second = 35; 


	a.date.year = 1993; 
	a.date.month = 2; 
	a.date.day = 20; 

	ExtendedTime b; 
	b.time.hour = 20; 
	b.time.minute = 45; 
	b.time.second = 20; 


	b.date.year = 0; 
	b.date.month = 10; 
	b.date.day = 10; 

	ExtendedTime c; 
	ExtendedTime d; 

	addExtendedTime(&a, &b, &c); 
	printExtendedTime(&a); 
	printExtendedTime(&b); 
	printExtendedTime(&c); 

	printf("\n\n\n"); 

	subtractExtendedTime(&a, &b, &d); 
	printExtendedTime(&a); 
	printExtendedTime(&b); 
	printExtendedTime(&d); 

	return 0; 
}



























// int subtractTime(Time * op1, Time * op2, Time * op3)
// {}

// addDate(Date * op1, Date * op2, Date * op3)

// subtractDate()

// addExtendedTime()

// subtractExtendedTime()

// printExtendedTime()