#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define GUESS_COUNT 3

/* http://hangmanwords.com/play */

int main()
{
	char word[100] = "apple";  // word stored in database
	int penalty = 0;

	printf("[%s]\nLength of string: %ld\n", word, sizeof(word));

	char ch;

	for (int d = 1; d < 4; ++d) // game loop 4 times
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
				++penalty; // Letter not found, penalty is added
				break;
			}
			printf("\n");
		}
		++d;
	}
	return 0;
}
