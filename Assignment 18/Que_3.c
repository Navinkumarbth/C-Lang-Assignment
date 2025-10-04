#include <stdio.h>
int main()
{
    int i, a[10], sum_even = 0, sum_odd = 0;

    printf("Enter 10 numbers");
    for (i = 0; i <= 9; i++)
        scanf("%d", &a[i]);
    for (i = 0; i <= 9; i++)
    {
        if (a[i] % 2 == 0)
            sum_even = sum_even + a[i];
        else
            sum_odd = sum_odd + a[i];
    }
    printf("Sum of all even is %d\n", sum_even);

    printf("Sum of all odd is %d\n", sum_odd);
    return 0;
}