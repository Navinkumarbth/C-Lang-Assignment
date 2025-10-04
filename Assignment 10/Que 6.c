#include <stdio.h>
int main()
{
int lower, uper, x,i;
lower=2;
uper=100;
for(x=lower;x<=uper;x++)
{
    for(i=2;i<x;i++)
    if(x%i==0)
    break;

    if(i==x)
    printf("%d ",x);

}

return 0;
}