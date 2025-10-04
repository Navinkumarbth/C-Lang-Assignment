#include <stdio.h>
int main()
{
    int a=20;
    while (a >= 2)
    {
        if(a%2==0)
        printf("%d ",a);
        a--;
    }
    return 0;
}