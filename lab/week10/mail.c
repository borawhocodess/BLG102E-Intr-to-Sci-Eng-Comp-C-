#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX_STRING_LEN 50

int strLenght(char* str)
{
	int i = 0;
	for(;str[i] != '\0';i++);
	return i;
}
void swap(char *first, char *second) // 8,5
{
	*first = *first + *second;  // 13,5
	*second = *first - *second;  //	13,8
	*first = *first - *second;  //	5,8
}

char* strReverse(char *source)
{
	int source_len = strLenght(source);
	for(int i = 0; i < (source_len/2); i++)
	{
		swap(&source[i], &source[source_len - i - 1]);
	}
	return source;
}

char* intToString(int input, char* string)
{
	//ASCII TABLE 1993
	int i = 0;
	while(input > 0)
	{
		string[i] = input % 10 + '0';
		input /= 10;
		i++;
	}
	string[i] = '\0';
	//3991
	return strReverse(string); //1993
}

char* strCopy(char* source, char* destination)
{
	int source_len = strLenght(source);
	for(int i = 0; i < source_len + 1; i++)
	{
		destination[i] = source[i];
	}
	return destination;
}



char* strConcatenate(char* source, char* destination)
{
	int destination_len = strLenght(destination);
	destination += destination_len;
	return strCopy(source, destination);
}

char* strSubString(char* source, char* destination, int start, int end)
{
	int source_lenght = strLenght(source);
	if(start + end <= source_lenght)
	{
		source += start;
		for(int i = 0; i < end; i++)
		{
			destination[i] = source[i];
		}
		destination[end]='\0';
	}
	return destination;
}

















void generateCandidateEmails(char* name, char* surname, int year)
{
	char candidate1[MAX_STRING_LEN] = "";
	char candidate2[MAX_STRING_LEN] = "";
	char candidate3[MAX_STRING_LEN] = "";
	char temp[MAX_STRING_LEN] = "";
	char ending[MAX_STRING_LEN] = "@itu.edu.tr";
	
	
	//calculate candidate 1
	strConcatenate(strSubString(name, temp, 0, 1), candidate1);
	strConcatenate(surname, candidate1);
	strConcatenate(intToString(year%100, temp), candidate1);
	strConcatenate(ending, candidate1);
	
	
	//calculate candidate 2
	strConcatenate(strSubString(name, temp, 0, 2), candidate2);
	strConcatenate(strSubString(surname, temp, 0, 2), candidate2);
	strConcatenate(intToString(rand()%10000, temp), candidate2);
	strConcatenate(ending, candidate2);
	
	
	//calculate candidate 3
	strConcatenate(surname, candidate3);
	strConcatenate(name, candidate3);
	strConcatenate(intToString(year, temp), candidate3);
	strConcatenate(ending, candidate3);
	
	printf("Email candidate 1: %s\n",candidate1);
	printf("Email candidate 2: %s\n",candidate2);
	printf("Email candidate 3: %s\n",candidate3);
	return;
}




int main()
{
	srand(time(NULL));
	char name[MAX_STRING_LEN];
	char surname[MAX_STRING_LEN];
	int year;
	
	printf("Enter your name: \n");
	scanf("%s", name);

	printf("Enter your surname: \n");
	scanf("%s", surname);

	printf("Enter a year: \n");
	scanf("%d", &year);
	
	generateCandidateEmails(name, surname, year);	
	
	return EXIT_SUCCESS;
}