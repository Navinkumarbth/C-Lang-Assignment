#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d", &x);
    if (x > 0)
    {
        printf("Positive");
    }
    else if (x < 0)
    {
        printf("Negetive");
    }
    else
    {
        printf("Zero");
    }
}