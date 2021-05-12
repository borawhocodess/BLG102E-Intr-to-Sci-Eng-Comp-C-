#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum status {CONTINUE, WON, LOST};

int roll_dice()
{
	int die1 = rand() % 6 + 1;
	int die2 = rand() % 6 + 1;
	int sum = die1 + die2;
	printf("%d + %d = %d\n", die1, die2, sum);
	return sum;
}

int main()
{
	enum status game_status = CONTINUE;

	srand(time(NULL));
	int points = roll_dice();
	switch (points)
	{
		case 7:
		case 11:
			game_status = WON;
			break;
		case 2:
		case 3:
		case 12:
			game_status = LOST;
			break;
		default:
			game_status = CONTINUE;
			break;
	}

	while (game_status == CONTINUE)
	{
		int next_throw = roll_dice();

		if (next_throw == points)
		{
			game_status = WON;
		}
		else if (next_throw == 7)
		{
			game_status = LOST;
		}
	}

	if (game_status == WON)
	{
		printf("Player wins.\n");
	}
	else
	{
		printf("Player loses.\n");
	}

	return EXIT_SUCCESS;
}