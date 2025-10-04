#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d", &x);
    if (x > 99 && x < 1000) //or if(x>=100 && x<=999)
    {
        printf("Three digit number");
    }
    else
    {
        printf("Not three digit number");
    }
}