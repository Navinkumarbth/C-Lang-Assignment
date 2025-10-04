#include <stdio.h>
int main()
{
    int m = 472;
    m = m % 10 * 100 + m / 10;
    printf("%d", m);
    return 0;
}