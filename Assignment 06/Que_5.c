#include<stdio.h>
int main ()
{
int x;
printf("Enter a number");
scanf("%d",&x);
if(x%2==0 && x%3==0)
{
    printf("Number is divisible by 2 and 3",x);
}
else{
    printf("Number is not divisible by 2 and 3",x);
}
return 0;
}