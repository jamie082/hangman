#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define GUESS_COUNT 3

/* http://hangmanwords.com/play */

int main()
{
    int a = 0;
    char = word[13] = {'h', 'i', 'd', 'd', 'e', 'n', 's', 't', 'r', 'i', 'n', 'g');
    char new_str[131313];
    int penatly = 0, length;
    int i = 0;
    
    /* Game is started with a word */

    length = strlen(word)

    printf("%s:\n Length of string: %d\n", word, length);

    for (i = 0; i < 26; i++)
    {
        new_str[i] = word[i];
    }

    for (i = 0; i < 26; i++)
    {
        new_str[i] = word[i]; // copy word[i] into new_str[i]
        printf("%c", new_str[i]);
    }
}

printf("\n")


char scan_string;
int ascii = scan_string;
// word[i] is char array

while (a < GUESS_COUNT) // loop 3 times
{
    printf("Enter letter: ");
    scanf("%c", &scan_string);

    /* create variable for scan_string 1 between 26 */

    for (i = 65; i < 90; i++) // If letter is in word, all instances revealed
    {
        if (new_str[i] == ascii) // Was found in search
        {
            // print("Found: %c\n", new_str[i]);
            printf("Found value: %c\n", scan_string);
        }

        else
        {
            printf("Value Not Found\n");
            ++penalty;
            break;
        }
    }
    a++;

    return 0;

}