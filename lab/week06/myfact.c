#include<stdio.h> 

int main()    
{    
	int number;    
	printf("Enter a number: ");    
	scanf("%d",&number);    
	int result = 1;
	if (number != 0)
	{
		for (int i = 1; i <= number; ++i)
		{
			result = result * i;
		} 	
	}   
	printf("Factorial of %d is: %d",number,result);    
	return 0;  
}