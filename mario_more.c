#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height of the pyramid is:");


    }
    while (n < 1 || n > 8); //condition to get a number from 1-8 from the user
    for (int i = 0; i < n; i++) //loop for height
    {
        for (int j = 0; j < n - 1 - i; j++) //loop for spaces on left pyramid
        {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++) // loop for hashes on left pyramid
        {
            printf("#");
        }
        printf(" "); // spacing between pyramids
        for (int p = 0; p <= i; p++) //loop for right pyramid
        {
            printf("#");
        }
        printf("\n");
    }

}