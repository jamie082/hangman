#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define GUESS_COUNT 3

/* http://hangmanwords.com/play */

int main()
{
	char word[] = "apple";
	int penalty = 0;
	int i = 0;

	printf("[%s]\nLength of string: %ld\n", word, sizeof(word));

	char ch;

	printf("\n");
	printf("Enter letter to search: ");
	scanf("%c", &ch);

	for (i = 0; i < 26; i++) // If letter is in word, all instances revealed
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

	return 0;
}
