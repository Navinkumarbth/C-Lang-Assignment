#include<stdio.h>
int main(){
   float x,d;
   printf("Enter amount in INR ");
   scanf("%f",&x);
   d=x/84.23;
   printf("USD %0.2f",d);
   return 0;
}