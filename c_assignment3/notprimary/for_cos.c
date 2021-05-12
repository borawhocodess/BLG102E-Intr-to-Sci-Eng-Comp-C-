#include <stdio.h>
#include <stdlib.h>

void zero_array(int size, int array[size][size]); // makes every input zero before the cars come in
void convert_array(int size, int base_array[size][size], int target_array[size][size]); // makes all 0 --> 111 and 1 --> 0 in an 2-d array
void print_array(int size, int array[size][size]); // prints out the array as a x-y plane
void score_array(int size, int array[size][size]); // gives a scoreto each cell for determination of the best
void find_best_slot(int size, int array[size][size]); // finds the best spot for ferrari


int main()
{
    int size, cars;

    do
    {
        printf("Size: ");
        scanf("%d", &size);
        if (size > 50) printf("Size must be between 50 and 1");
    }
    while (size > 50); // RULE: Maximum size of a parking area can be 50 x 50.

    int parking_lot[size][size];

    zero_array(size, parking_lot);

    printf("Cars: ");
    scanf("%d", &cars);

    if (cars > size*size) // RULE: Cars cannot exceed the limits of the parking area grid.
    {
        cars = size*size; // MAIL RESPONSE (maltintas@itu.edu.tr)
    }

    if (cars == 0 || cars == size*size) // RULE: If there is no cars or no available slot in the parking area.
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

    zero_array(size, score_map);

    convert_array(size, parking_lot, score_map);

    score_array(size, score_map);

  print_array(size, parking_lot); // for debugging
  print_array(size, score_map); // for debugging

    find_best_slot(size, score_map);

    return EXIT_SUCCESS;
}


//////---- FUNCTIONS ----//////


void zero_array(int size, int array[size][size])
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            array[i][j] = 0;
        }
    }
}

void convert_array(int size, int base_array[size][size], int target_array[size][size])
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (base_array[i][j] == 0) target_array[i][j] = 111;
            else if (base_array[i][j] == 1) target_array[i][j] = 0;
        }
    }
}

void print_array(int size, int array[size][size])
{
    printf("\nArray:\n\n");

    for (int i = 0; i < size; ++i)
    {
        printf("%2d ", size-i); //!! y-axis

        for (int j = 0; j < size; ++j)
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

void score_array(int size, int array[size][size])
{
    for (int a = 0; a < (size*2 - 2); ++a)
    {
        for (int i = 0; i < size; ++i)
        {
            for (int j = 0; j < size; ++j)
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

void find_best_slot(int size, int array[size][size])
{
    int x, y;
    int best_slot;

    best_slot = array[0][size - 1];

    for (int j = size-1; j >= 0; --j)
    {
        for (int i = 0; i < size; ++i)
        {
            if (array[i][j] >= best_slot)
            {
                best_slot = array[i][j];
                x = j + 1;
                y = size - i;
            }
        }
    }
    printf("Best Slot Found In: %d %d\n", x, y);
}