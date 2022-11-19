#include <cs50.h>
#include <stdio.h>

//void draw(int n);

int main(void)
{

    int i,j,k;
    int n;
    do{
        n = get_int("Height:" );
    }
    while (n<=0 || n>=9);

//draw(n);


//void draw(int n)
//{
    if(n==0)
    {
        return 0;
    }

for(k=1; k<=n; k++)
{
   for(j=n; j>k; j--)
            printf(" ");

    //draw(n-1);
    for(i=0; i<k; i++)
    {
        printf("#");
    }
    printf("\n");
}
return 0;
}
