#include <stdio.h>
#include <stdlib.h>

int balance = 100;

void withdraw(int amount)
{
	balance -= amount;
}

void deposit(int amount)
{
	balance += amount;
}


int main()
{
	printf("%d\n", balance);
	deposit(80);
	printf("%d\n", balance);
	withdraw(60);
	printf("%d\n", balance);
	return EXIT_SUCCESS;
}