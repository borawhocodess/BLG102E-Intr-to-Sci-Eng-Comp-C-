#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubblesort(int size, int array[], char type);
void print_array(int size, int array[], int seperator);

int main()
{
    int size;
    int type;

    // randomization

    srand(time(NULL));

    size = rand()%10 + 5;
    type = rand()%2;

    // arrays

    int array[size];

    for (int i = 0; i < size; ++i)
    {
        array[i] = rand()%9 + 1;
    }

    char types[] ={'A', 'D'};

    // lets sort it

    print_array(size, array, 0);

    bubblesort(size, array, types[type]);

    print_array(size, array, size-1);
    
    return 0;
}


void bubblesort(int size, int array[], char type)
{
    int holder = 0;
    int count = 0;
    int seperator = size;

    for (int i = seperator; i >= 0 + 1; i--)
    {
        for (int i = 1; i < size; ++i)
        {
            if (array[i-1] > array[i])
            {
                holder = array[i];
                array[i] = array[i-1];
                array[i-1] = holder;
                print_array(size, array, seperator);
                count++;
            }
        }
    }
}


void print_array(int size, int array[], int seperator)
{
    for (int i = 0; i < size; ++i)
    {
        if (i == seperator)
        {
            if (i == size - 1)
            {
                printf("%4d |", array[i]);
            }
            else
            {
                printf(" | %d", array[i]);
            }
        }
        else
        {
            printf("%4d", array[i]);
        }
    }
    printf("\n");
}