#include <stdio.h>
int main()
{
    int n;
    printf("Enter  a number");
    scanf("%d",&n);
    while (n)
    {
        printf("%d ",n);
        n--;
    }
    return 0;
}