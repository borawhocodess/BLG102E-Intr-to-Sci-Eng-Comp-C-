#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void make_zero(int size, int array[size][size]); // makes every input zero before the cars come in
void convert_array(int size, int normal_array[size][size], int target_array[size][size]); // makes all 0 --> 111 and 1 --> 0 in an 2-d array
void print_array(int size, int array[size][size]); // prints out the array as a x-y plane
void point_array(int size, int array[size][size]); // prints out the array as a x-y plane
void safest_spot(int size, int array[size][size], int*first, int*second); // finds the best spot for ferrari
void endgame(int arr_size, int arr[arr_size], int*kaka, int*bok);


int main()
{
	FILE *fp;
    fp = fopen("orta.t", "w");// "w" means that we are going to write on this file

    
	fprintf(fp, "- init:\n"
	"    run: rm -f assignment3\n"
	"    blocker: true\n");

	fprintf(fp, "\n");

	fprintf(fp, "- build:\n"
	"    run: gcc -std=c99 -Wall -Werror assignment3.c -o assignment3  # timeout: 2\n"
	"    blocker: true\n");

	fprintf(fp, "\n");

	srand(time(NULL));

	int how_many_cases_do_you_want = 10;

	int count=0;


	for (int i = 0; i < how_many_cases_do_you_want; ++i)
	{
		fprintf(fp, "- case%d:\n"
		"    run: ./assignment3\n"
		"    points: 1\n", i);

		int size = rand()%8 + 6;

		

		if (size > 30)
		{
			if (count == 1)
			{
				while (size > 30)
				{
					size = rand()%21 + 1;
				}
			}

			count = 1;
		}

		if (size == 1)
		{
			size = 2;
		}

		int cars = rand()%(size*size);

		if (cars == 0)
		{
			cars = 1;
		}

		int endgame_arr[50*50];

		endgame_arr[0] = size;
		endgame_arr[1] = cars;

		fprintf(fp, "    script:\n"
		"        - expect: \"Size: \"\n"
		"        - send: \"%d\"\n", size);

		fprintf(fp, "        - expect: \"Cars: \"\n"
		"        - send: \"%d\"\n", cars);

		for (int c = 0; c < cars; ++c)
		{
			int a = rand()%size + 1;
			int b = rand()%size + 1;

			fprintf(fp, "        - expect: \"Locations: \"\n"
			"        - send: \"%d %d\"\n"
			, a,b);

			endgame_arr[2*c + 2] = a;
			endgame_arr[2*c + 3] = b;
		}

		int ana, baba;

		endgame(50*50, endgame_arr, &ana, &baba);





	    fprintf(fp, "        - expect: \"Best Slot Found In: %d %d\\r\\n\"  # timeout: 2\n", ana, baba);



		fprintf(fp, "        - expect: _EOF_  # timeout: 2\n"
		"    return: 0\n");

		fprintf(fp, "\n");

	}

	fclose(fp);

	return 0;
}




void make_zero(int size, int array[size][size])
{
	for (int i = 0; i < size; ++i)	// Process the ith row
	{
		for (int j = 0; j < size; ++j) // Process the jth column in the ith row
		{
			array[i][j] = 0;
		}
	}
}

void convert_array(int size, int normal_array[size][size], int target_array[size][size])
{
	for (int i = 0; i < size; ++i)	// Process the ith row
	{
		for (int j = 0; j < size; ++j) // Process the jth column in the ith row
		{
			if (normal_array[i][j] == 0) target_array[i][j] = 111;
			else if (normal_array[i][j] == 1) target_array[i][j] = 0;
		}
	}
}

void print_array(int size, int array[size][size])
{
	printf("\nArray:\n\n");

	for (int i = 0; i < size; ++i)	// Process the ith row
	{
		printf("%2d ", size-i); //!! y-axis

		for (int j = 0; j < size; ++j) // Process the jth column in the ith row
		{
			printf("%3d", array[i][j]);
		}
		printf("\n");
	}

	printf("\n   ");
	for (int i = 1; i <= size; ++i)
	{
		printf("%3d", i); //!! x-axis
	}

	printf("\n\n");
}

void point_array(int size, int array[size][size])
{
	for (int a = 0; a < (size*2 - 2); ++a)
	{
		for (int i = 0; i < size; ++i)	// Process the ith row
		{
			for (int j = 0; j < size; ++j) // Process the jth column in the ith row
			{
				if (array[i][j] == a)
				{
					if (i-1 >= 0 && i-1 < size && array[i-1][j] > a) array[i-1][j] = a + 1; //up
					if (j+1 >= 0 && j+1 < size && array[i][j+1] > a) array[i][j+1] = a + 1; //right
					if (i+1 >= 0 && i+1 < size && array[i+1][j] > a) array[i+1][j] = a + 1; //down
					if (j-1 >= 0 && j-1 < size && array[i][j-1] > a) array[i][j-1] = a + 1; //left
				}
			}
		}
	}
}

void safest_spot(int size, int array[size][size], int*first, int*second)
{

	int x, y;
	int best_spot;

	best_spot = array[0][size];

	for (int j = size-1; j >= 0; --j)
	{
		for (int i = 0; i < size; ++i)
		{
			if (array[i][j] >= best_spot)
			{
				best_spot = array[i][j];
				x = j + 1;
				y = size - i;
			}
		}
	}

	*first = x;
	*second = y;
}

void endgame(int arr_size, int arr[arr_size], int*kaka, int*bok)
{
	int size = arr[0];
	int cars = arr[1];

	int parking_lot[size][size];

	make_zero(size, parking_lot);

	for (int i = 0; i < cars; ++i)
	{
		int x = arr[2*i + 2];
		int y = arr[2*i + 3];

		parking_lot[size-y][x-1] = 1;
	}

	int point_map[size][size];

	make_zero(size, point_map);

	convert_array(size, parking_lot, point_map);

	point_array(size, point_map);

//	print_array(size, parking_lot); // for debugging
//	print_array(size, point_map); // for debugging

	int q,r;

	safest_spot(size, point_map, &q, &r);


	*kaka =q;
	*bok =r;
}