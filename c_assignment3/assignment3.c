#include <stdio.h>
#include <stdlib.h>

void make_zero(int size, int array[size][size]); // makes every input zero before the cars come in
void convert_array(int size, int normal_array[size][size], int target_array[size][size]); // makes all 0 --> 111 and 1 --> 0 in an 2-d array
void print_array(int size, int array[size][size]); // prints out the array as a x-y plane
void score_array(int size, int array[size][size]); // gives a score to each cell for determination of the best
void safest_spot(int size, int array[size][size]); // finds the best spot for ferrari


int main()
{
    int size, cars;

    do
    {
        printf("Size: ");
        scanf("%d", &size);
        if (size > 50 || size < 1) printf("Size must be between 50 and 1");
    }
    while (size > 50 || size < 1); // KURAL: otopark boyutu 50 x 50 den büyük olamaz

    int parking_lot[size][size];

    make_zero(size, parking_lot);

    printf("Cars: ");
    scanf("%d", &cars);

    if (cars > size*size) // KURAL: otoparktaki yerden fazla araba bulunamaz
    {
        cars = size*size; // MAİL DE BÖYLE DENDİ
    }

    if (cars == 0 || cars == size*size) // KURAL: araba yoksa veya otopark doluysa
    {
        if (cars == 0) printf("Best Slot Found In: 1 1\n");
        else if (cars == size*size) printf("Best Slot Found In: 0 0\n");

        return EXIT_SUCCESS;
    }

    for (int i = 0; i < cars; ++i)
    {
        int x, y;
        printf("Locations: ");
        scanf("%d %d", &x, &y);

        parking_lot[size-y][x-1] = 1;
    }

    int score_map[size][size];

    make_zero(size, score_map);

    convert_array(size, parking_lot, score_map);

    score_array(size, score_map);

  print_array(size, parking_lot); // for debugging
  print_array(size, score_map); // for debugging

    safest_spot(size, score_map);

    return EXIT_SUCCESS;
}


//////---- FUNCTIONS ----//////


/**
 * makes every input zero before the cars come in
 *
 *@param size
 *@param array
 */

void make_zero(int size, int array[size][size])
{
    for (int i = 0; i < size; ++i)  // Process the ith row
    {
        for (int j = 0; j < size; ++j) // Process the jth column in the ith row
        {
            array[i][j] = 0;
        }
    }
}

/**
 * makes all 0 --> 111 and 1 --> 0 in an 2-d array
 *
 *@param size
 *@param normal-array
 *@param target_array
 */

void convert_array(int size, int normal_array[size][size], int target_array[size][size])
{
    for (int i = 0; i < size; ++i)  // Process the ith row
    {
        for (int j = 0; j < size; ++j) // Process the jth column in the ith row
        {
            if (normal_array[i][j] == 0) target_array[i][j] = 111;
            else if (normal_array[i][j] == 1) target_array[i][j] = 0;
        }
    }
}

/**
 * prints out the array as a x-y plane
 *
 *@param size
 *@param array
 */

void print_array(int size, int array[size][size])
{
    printf("\nArray:\n\n");

    for (int i = 0; i < size; ++i)  // Process the ith row
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

/**
 * gives a score to each cell for determination of the best
 *
 *@param size
 *@param array
 */

void score_array(int size, int array[size][size])
{
    for (int a = 0; a < (size*2 - 2); ++a)
    {
        for (int i = 0; i < size; ++i)  // Process the ith row
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

/**
 * finds the best spot for ferrari
 *
 *@param size
 *@param array
 */

void safest_spot(int size, int array[size][size])
{
    int x, y;
    int best_spot;

    best_spot = array[0][size-1];

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
    printf("Best Slot Found In: %d %d\n", x, y);
}