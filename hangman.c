#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define GUESS_COUNT 3
#define GAME_ERROR_NUM 3
#define FUNC 8
char b[FUNC];
int penalty;
char ch;
char str[100];

/* http://hangmanwords.com/play */

int main()
{
	char word[] = "apple";
	int penalty = 0;

	printf("[%s]\nLength of string: %ld\n", word, sizeof(word));

	for (int game = 4; game >= 0; game -=1) // game loop 4 times
	{
		printf("Enter letter to search for: ");
		scanf("%c", &ch);

		for (int i = 0; i <= strlen(word); i++) // Guess count, 4 times
		{
			if (word[i] == ch) // Was found in Search
			{
				printf("Found value: %c = %d\n", ch, i + 1);
			}

			else
			{
				penalty++;
			}
		}
	}

	if (penalty >= GAME_ERROR_NUM) /* if error num is greater than or equal to 3 */
	{
		printf("You won the game with, three total errors (3)");
	}

	else
	{
		printf("The game is still running\n");
	}

}
