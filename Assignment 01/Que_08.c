#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two integers");
    scanf("%d", &a);
    b = a*a;
    printf("Square of %d is %d", a, b);
    return 0;
}