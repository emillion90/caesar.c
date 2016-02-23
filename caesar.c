/**
* pset 2
* caesar.c
* Evan Million <million.evan@gmail.com>
**/

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[]) 
{
    // Checks user's command-line argument to see if valid
    if (argv[1] == NULL || argc > 2 || argv[1] < 0)
    {
        printf("Please enter 1 integer as the command line argument.\n");
        return 1;
    }
    // Asks user for input and converts command-line arg to int
    printf("");
    string input = GetString();
    int k = atol(argv[1]);
    // For loop iterates over each character in user's input
    // and checks to see if upper or lower case and then 
    // shifts the character up k number of spaces 
    // provided by the user. Then prints shifted character excluding
    // special characters.
    for (int i = 0, n = strlen(input); i < n; i++) 
    {
        if (input[i] >= 32 && input[i] <= 64)
        {
            printf("%c", input[i]);
        }
        else if (input[i] >= 65 && input[i] <= 90 && (input[i] + k) > 90)
        {
            printf("%c", (((input[i] - 65) + k) % 26) + 65);
        }
        else if (input[i] >= 97 && input[i] <= 122 && (input[i] + k) > 122)
        {
            printf("%c", (((input[i] - 97) + k) % 26) + 97);
        }
        else if (input[i] + k) 
        {
            printf("%c", input[i] + k);
        }
    }
    printf("\n");
    return 0;
}
