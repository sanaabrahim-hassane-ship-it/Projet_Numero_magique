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
	exit(0);
}
