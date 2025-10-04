#include <stdio.h>
int main()
{
    int year;
    printf("Enter year number");
    scanf("%d", &year);
    if (year % 100)
    {
        // non century year
        if (year % 4)
        {
            printf("Non leap year");
        }
        else
        {
            printf("Leap year");
        }
    }
    else
    {
        // century year
        if (year % 400)
        {
            printf("Non leap year");
        }
        else
        {
            printf("Leap year");
        }
    }
}