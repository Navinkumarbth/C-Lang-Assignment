#include <stdio.h>
int main()
{
    int i, a[10], min;

    printf("Enter 10 numbers");
    for (i = 0; i <= 9; i++)
        scanf("%d", &a[i]);
    min = a[0];
    for (i = 0; i <= 9; i++)
    {
        if (a[i] <min)
            min = a[i];
    }
    printf("Smallest numbers is %d\n", min);

    return 0;
}