#include <stdio.h>
int main()
{
    int a = -1, b = 1, c, n, i;
    printf("Enter a number");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
       
    }
     
    return 0;
} 