#include <stdio.h>
void sita();
int main()
{
    sita();
    return 0;
}
void sita()
{
    int choice, a, b, l, c;
    while (1)
    {
        printf("1.LCM\n");
        printf("2.Sum of digits\n");
        printf("3.Volume of cuboid\n");
        printf("4.Check prime\n");
        printf("5.Exit\n");
        printf("Enter your number\n");
        scanf("%d", &choice);
        switch (choice)
        {

        case 1:
            printf("enter teo number");
            scanf("%d%d", &a, &b);
            for (l = a > b ? a : b; l <= a * b; l++)
            {
                if (l % a == 0 && l % b == 0)
                {
                    printf("LCM is %d", l);
                    break;
                }
            }
            break;
        case 2:
            printf("enter a number");
            scanf("%d", &a);
            b = 0;
            while (a)
            {
                b = b + a % 10;
                a /= 10;
            }
            printf("Sum is %d", b);
            break;
        case 3:
            printf("enter lenght of sides of a cuboid");
            scanf("%d%d%d", &a, &b, &c);
            printf("Volume is %d\n", a * b * c);
            break;
        case 4:
            printf("enter a number");
            scanf("%d", &a);
            for (b = 2; b < a; b++)
                if (a % b == 0)
                    break;
            if (a == b)
                printf("%d is P\n", a);
            else
                printf("%d is not Prime\n");
            break;
        case 5:
        default:
            printf("Invailid choice");
        }
    }
}