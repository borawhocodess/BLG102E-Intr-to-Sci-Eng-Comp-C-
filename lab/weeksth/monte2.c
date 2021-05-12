#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMBER_OF_ITER 10000

int main()
{
    float changing_the_selection = 0.0;
    float not_changing_the_selection = 0.0;
    
    srand(time(NULL)); // randomize seed
    
    int selected_door, door_with_the_prize;
    
    for (int i = 0; i < NUMBER_OF_ITER; i++) 
    {
        door_with_the_prize = rand() % 3 + 1;
        selected_door = rand() % 3 + 1;
        
        if (selected_door == door_with_the_prize)
            not_changing_the_selection++;
        else if (selected_door != door_with_the_prize)
            changing_the_selection++;   
    }
    
    float ratio_for_changing = changing_the_selection / NUMBER_OF_ITER;
    float ratio_for_not_changing = not_changing_the_selection / NUMBER_OF_ITER;
    
    printf("Winning ratio for changing the selection: %f \n", ratio_for_changing);
    printf("Winning ratio for not changing the selection: %f \n", ratio_for_not_changing);
    
    return 0;
}