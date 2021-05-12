#include <stdio.h>

int factorial(int number)
{
	int result = 1;
	if (number != 0)
	{
		for (int i = 1; i <= number; ++i)
		{
			result = result * i;
		} 	
	}
	return result;
}

int combination(int n, int r)
{
	int formula = factorial(n) / (factorial(n - r) * factorial(r));
	return formula;
}

int main()
{
	int n_main, r_main, result_main;
	printf("gimme two number for combination as C(n,r): ");
	scanf("%d %d", &n_main, &r_main);
	result_main = combination(n_main, r_main);
	printf("combination result: %d\n", result_main);
	return 0;
}