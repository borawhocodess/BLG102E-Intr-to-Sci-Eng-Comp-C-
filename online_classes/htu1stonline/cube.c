#include <stdio.h>
#include <stdlib.h>

double cube_volume(double side_length)
{
	double volume = side_length * side_length * side_length;
	return volume;
}


int main()
{
	/* code */
	double side = 7.35;
	double vol = cube_volume(side);
	printf("Volume: %.2f\n", vol);
	return EXIT_SUCCESS;
}