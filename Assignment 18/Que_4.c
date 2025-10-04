#include <stdio.h>
int main()
{
    int i, a[10], max;

    printf("Enter 10 numbers");
    for (i = 0; i <= 9; i++)
        scanf("%d", &a[i]);
    max = a[0];
    for (i = 0; i <= 9; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    printf("Greatest numbers is %d\n", max);

    return 0;
}