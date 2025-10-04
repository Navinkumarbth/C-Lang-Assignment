#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d", &x);
    if (x / 2)
    {
        printf("even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}