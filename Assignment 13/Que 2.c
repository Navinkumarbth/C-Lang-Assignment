#include <stdio.h>
int main()
{   
    int x,a,b;
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");

    printf("Enter a number");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
       printf("Enter two numbers\n");
         scanf("%d%d",&a,&b);
         printf("Sum is %d\n",a+b);
        break;
    case 2:
         printf("Enter two numbers\n");
         scanf("%d%d",&a,&b);
         printf("Difference is %d\n",a-b);
        break;
    case 3:
         printf("Enter two numbers\n");
         scanf("%d%d",&a,&b);
         printf("Product is %d\n",a*b);
         break;
    case 4:
        printf("Enter two numbers\n");
         scanf("%d%d",&a,&b);
         printf("Quotient is %d\n",a/b);
    }
    printf("Outside switch\n");
    return 0;
}   