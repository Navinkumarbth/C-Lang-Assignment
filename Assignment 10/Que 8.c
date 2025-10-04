#include<stdio.h>
int main (){
 int a,x,i;
 printf("Enter a number:");
 scanf("%d",&a);
for(x=a+1; ;x++)
{
    for(i=2; i<x;i++)
    if(x%i==0)
    break;
    if(i==x) 
    {
        printf("Next Prime number is %d",x);
        break;
    }
}
return 0;
}