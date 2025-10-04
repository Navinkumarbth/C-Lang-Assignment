#include<stdio.h>
int main ()
{
char x;
printf("Enter alphabet");
scanf("%c",&x);
if(x>='a'&& x<='z')
{
    printf("Lowercase alphabet");
}
else if (x>='A'&& x<='Z')
{
    printf("Uppercase alphabet");
}
else
{
  printf("Not an alphabet");
}
return 0;
}