#include<stdio.h>
int main(){
int sp,cp,p,l;
printf("Enter price");
scanf("%d %d",&sp,&cp);
if(sp-cp>=0)
{
    p=(sp-cp)/cp*100;
    printf("%d",p);
}
else
{
    l=(cp-sp)/cp*100;
    printf("%d",l);
}
return 0;
}