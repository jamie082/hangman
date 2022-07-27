#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define GUESS_COUNT 3

/* http://hangmanwords.com/play */

int main()
{
	int a = 0;
	//char word[13] = {'h', 'i', 'd', 'd', 'e', 'n', 's', 't', 'r', 'i', 'n', 'g', '\0'};
	//const char *word = "hiddenstring";
	char word[] = "apple";
	int penalty = 0, length= 0;
	int i = 65;
	/* Game is started with a word */

	printf("[%s]\nLength of string: %ld\n", word, sizeof(word));

	for (i = 0; i < 13; i++)
	{
		new_str[i] = word[i];  // copy word[i] into new_str[i]
	}

	char scan_string;

	int ascii = scan_string;

	do
	{
		printf("\n");
		printf("Enter letter to search: ");
		scanf(" %c", &scan_string);

		for (i = 0; i < strlen(word); i++) // If letter is in word, all instances revealed
		{
			if (word[i] == scan_string) // Was found in Search
			{
				printf("Found value: %c = %d", i, ascii);
				break;
			}

			else
			{
				printf("\nValue Not found: %c = %d\n", scan_string, ascii);
				++penalty; // Letter not found, penalty is added
				break;
			}	
			printf("\n");
		}
		a = a + 1;
	} while (a <= GUESS_COUNT);

	return 0;
}
