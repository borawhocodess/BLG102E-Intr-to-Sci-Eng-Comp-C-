#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int get_throw_value(int segment, char ring)
{
	int throw_value;

	if (ring == 'S') throw_value = segment;
	else if (ring == 'D') throw_value = segment * 2;
	else if (ring == 'T') throw_value = segment * 3;
	else if (ring == 'O') throw_value = 25;
	else if (ring == 'I') throw_value = 50;

	return throw_value;
}

int dart_game(int current_points, int segment, char ring)
{
	if (ring == 'D')
	{
		current_points -= get_throw_value(segment, ring);
	}
	return current_points;
}

int main()
{
	printf("- init:\n"
	"    run: rm -f assignment2\n"
	"    blocker: true\n");

	printf("\n");

	printf("- build:\n"
	"    run: gcc -std=c99 -Wall -Werror assignment2.c -o assignment2  # timeout: 2\n"
	"    blocker: true\n");

	printf("\n");

	srand(time(NULL));

	int how_many_cases_do_you_want = 30;

	for (int i = 1; i <= how_many_cases_do_you_want; ++i)
	{
		printf("- case%d:\n"
		"    run: ./assignment2\n"
		"    points: 1\n", i);

		char ring[]={'S','D','T','O','I'};
		int to[]={101,301,501};


    	int target;
    	int players_segment;
	    char players_ring;

		target = to[rand()%3];
		int points = target;
		int points_before;
		int counter = 0;

		printf("    script:\n"
		"        - expect: \"Target: \"  # timeout: 2\n"
		"        - send: \"%d\"\n", target);

		while (points != 0)
		{
			players_segment = rand()%20 + 1;
			players_ring = ring[rand()%5];
			if (points != target)
			{
				if (points_before == points)
				{
					counter ++;
					if (counter > 5)
					{
						if (points % 2 == 0)
						{
							players_segment = points / 2;
							players_ring = ring[1];
						}
						else
						{
							players_segment = rand()%(points-1)+1;
							if (points == 3)
							{
								players_segment = 1;
								players_ring = ring[0];
							}
						}
					}
				}
			}
			

			points_before = points;

			
			if (points == target || points == players_segment * 2)
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
			printf("        - expect: \"Throw: \"                   # timeout: 2\n"
			"        - send: \"%d %c\"\n"
			"        - expect: \"Points: %d\\r\\n\"                   # timeout: 2\n"
			, players_segment, players_ring, points);
		}

		counter = 0;

		printf("    exit: 0\n");
		printf("\n");
	}



	return 0;
}

