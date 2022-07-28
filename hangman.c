#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define GUESS_COUNT 3
#define GAME_ERROR_NUM 3

/* http://hangmanwords.com/play */

int main()
{
	char word[100] = "apple";  // word stored in database
	int penalty = 0;

	printf("[%s]\nLength of string: %ld\n", word, sizeof(word));

	char ch;

	for (int game = 4; game >= 0; game -=1) // game loop 4 times
	{
		printf("Enter letter to search: ");
		scanf("%c", &ch);

		for (int i = 0; i < 26; i++) // Guess count, 4 times
		{
			if (word[i] == ch) // Was found in Search
			{
				printf("Found value: %c = %d", i, ch);
				break;
			}

			else
			{
				printf("\nValue Not found: %c = %d\n", i, ch);
				break;
				++penalty;
			}
			break;
		}
	}

	if (penalty >= GAME_ERROR_NUM)
	{
		printf("You won the game with \n");
	}

	else
	{
		printf("The game is still running\n");
	}

}
