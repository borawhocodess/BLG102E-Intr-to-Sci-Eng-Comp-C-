#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double get_random_number(double lower_limit, double upper_limit)
{
	return lower_limit + (upper_limit - lower_limit) * rand()/RAND_MAX;

}

double calculate_pi(int max_iteration)
{
	double x, y;
	int in_circle = 0;

	for (int i = 0; i < max_iteration; ++i)
	{
		x = get_random_number(-1,1);
		y = get_random_number(-1,1);
		if (x*x + y*y <= 1)
		{
			in_circle++;
		}
	}

	return (in_circle *4.0 / max_iteration);
}

int main()
{
	srand(time(NULL));
	int max_iteration = 1000000;
	double pi = calculate_pi(max_iteration);
	printf("estimated pi: %.5f\n", pi );

	double mean = 0;
	int num_trials = 1000;
	for (int i = 0; i < num_trials; ++i)
	{
		mean = mean + calculate_pi(max_iteration);
	}
	mean = mean / num_trials;

	printf("%f\n", mean);

	return 0;
}