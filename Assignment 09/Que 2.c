#include <stdio.h>
int main()
{
    int i, n, s;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2,s=0;i<=2*n;i+=2)  //for(i=1,s=0;i<=n;i++)  
       s=s+i;
       
    printf("sum is %d",s);
    return 0;
}