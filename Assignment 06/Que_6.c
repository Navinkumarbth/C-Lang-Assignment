#include<stdio.h>
int main ()
{
int x;
printf("Enter a number");
scanf("%d",&x);
if(x%7==0 || x%3==0)
{
    printf("Number is divisible by 7 and 3",x);
}
else{
    printf("Number is not divisible by 7 and 3",x);
}
return 0;
}