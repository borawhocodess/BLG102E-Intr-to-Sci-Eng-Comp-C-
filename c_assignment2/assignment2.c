#include <stdio.h>


/* 1. Write a function that takes the segment and ring of a throw as parameters and
 * returns the point value for the throw.
 */

int get_throw_value(int segment, char ring)
{
    int throw_value = segment;

    if (ring == 'S') throw_value = segment;
    else if (ring == 'D') throw_value = segment * 2;
    else if (ring == 'T') throw_value = segment * 3;
    else if (ring == 'O') throw_value = 25;
    else if (ring == 'I') throw_value = 50;

    return throw_value;
}


/* 2. Write a function that takes the current points, and the segment and ring for a
 * throw as parameters and returns the remaining points after that throw
 * according to the rules described above. This should cover the starting and
 * ending of the game.
 */

int dart_game(int current_points, int segment, char ring)
{
    if (ring == 'D')
    {
        current_points -= get_throw_value(segment, ring);
    }
    return current_points;
}


/* 3. Using these functions, write a main function that interacts with the user and
 * prints out the score after every throw until the game is ended.
 */

int main()
{
    int target;
    int players_segment;
    char players_ring;

    printf("Target: ");
    scanf("%d", &target);
    int points = target;

    while (points != 0)
    {
        printf("Throw: ");
        scanf("%d %c", &players_segment, &players_ring);
        if (points == target)
        {
            points = dart_game(points, players_segment, players_ring);
        }
        else if (points == players_segment * 2)
        {
            if (players_ring == 'D')
            {
                points = dart_game(points, players_segment, players_ring);
            }
            else
            {
                if ((points - get_throw_value(players_segment, players_ring))>1)
                {
                    points -= get_throw_value(players_segment, players_ring);
                }
            }  
        }
        else
        {
            if ((points - get_throw_value(players_segment, players_ring))>1)
            {
                points -= get_throw_value(players_segment, players_ring);
            }
        }
        printf("Points: %d\n", points);
    }
    return 0;
}