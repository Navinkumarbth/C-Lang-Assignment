#include<stdio.h>
int main(){
int a,b;
printf("Enter two integers");
scanf("%d %d",&a,&b);
a=a+b-(b=a);
printf("%d %d",a,b);
return 0;
 
}