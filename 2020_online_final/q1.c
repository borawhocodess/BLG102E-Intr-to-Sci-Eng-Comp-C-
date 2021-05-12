#include <stdio.h>
//You cannot use the string library

#define MAX_STRING_SIZE 20


void append(char* a, char* b)
{
    //fill the function body. Do not change the arguments and the return parameter

    int a_count = 0;
    int b_count = 0;

    while(a[a_count] != '\0') {a_count++;}
    while(b[b_count] != '\0') {b_count++;}

    //printf("%d\n", a_count);
    //printf("%d\n", b_count);

    int check = a_count + b_count + 1;

    if ( check > 19)
    {
        printf("Error\n");
        return;
    }

    int length = 0;

    for (int i = 0; i < a_count; ++i)
    {
        a[length] = a[i];
        length ++;
    }

    char empty = ' ';

    a[length] = empty;
    length ++;

    for (int i = 0; i < b_count; ++i)
    {
        a[length] = b[i];
        length ++;
    }

    a[length] = '\0';
    length++;


    printf("%s\n", a);



    return;
}

int main()
{
	char a[MAX_STRING_SIZE];
	char b[MAX_STRING_SIZE];
	scanf("%s",a);
	scanf("%s",b);
	append(a,b);
	return 0;
}
