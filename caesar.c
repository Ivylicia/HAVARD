#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    //Ensure the user input has two arguments
    if(argc !=2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int k = 0; k< strlen(argv[1]); k++)
    {
        if(isalpha(argv[1][k]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    int k = atoi(argv[1]) % 26; //if k is >26 store the division remainder instead
    string plaintext = get_string("plaintext: ");

    printf("ciphertext:");

    for(int i = 0; i < strlen(plaintext); i++)
    {
        if(!isalpha(plaintext[i]))
        {

            printf("%c", plaintext[i]);//prints the current element of the array if it's not alpha
            continue;
        }
        //checking if the current element is uppercase
        int ascii_offset = isupper(plaintext[i]) ? 65 : 97;
        //calculating how far the current element is from the lowercase
        int pi = plaintext[i] - ascii_offset;
        //index of the letter cyphering
        int ci = (pi + k) % 26;

        //printing the new letter cyphered
        printf("%c", ci + ascii_offset);
    }

    printf("\n");
    return 0;
}