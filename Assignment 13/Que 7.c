#include <stdio.h>
void m();
int main()
{
    m();
     return 0;
   
}
void m()
{
    int choice, x, f;
    while (1)
    {
        printf("1.Factorial\n");
        printf("2.Even odd\n");
        printf("3.Area of a circle\n");
        printf("4.Sum of first N natural numbers\n");
        printf("5.Exit\n");
        printf("Enter your number\n");
        scanf("%d", &choice);
        switch (choice)
        {

        case 1:
            printf("enter a number");
            scanf("%d", &x);
            f = 1;
            while (x)
            {
                f = f * x;
                x--;
            }
            printf("factorial is %d\n",x);
            break;
        case 2:
            printf("enter a number");
            scanf("%d", &x);
            x & 1 ? printf("Odd") : printf("Even");
            break;
        case 3:
            printf("enter a number");
            scanf("%d", &x);
            printf("Area is %f",3.14*x*x);
            break;
        case 4:
            printf("enter a number");
            scanf("%d", &x);
            f = 0;
            while (x)
            {
                f = f * x;
                x--;
            }
            printf("Sum is %d", f);
            break;
        case 5:
        default:
            printf("Invailid choice");
        }
    }
}