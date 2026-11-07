#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	int random_number;
	int guessed_number;
	bool game_state = true;

	srand(time(NULL));
	random_number = rand() % 100 + 1;

	printf("Choisissez un nombre entre 1 et 100 :\n");
	scanf("%d", &guessed_number);

	while (game_state)
	{
		if (guessed_number > random_number)
		{
			printf("C'est moins !\n");
			scanf("%d", &guessed_number);
		}
		else if (guessed_number < random_number)
		{
			printf("C'est plus !\n");
			scanf("%d", &guessed_number);
		}
		else if (guessed_number == random_number)
		{
			printf("Gagné !\n");
			game_state = false;
		}
	}
	exit(0);
}
