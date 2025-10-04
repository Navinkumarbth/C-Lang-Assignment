#include <stdio.h>
void p4();
int main ()
{
    p4();
    return 0;
}
void p4()
{
    int choice, a, b, c;
    while (1)
    {
        printf("\n1. check isosceles triangle");
        printf("\n2. check right angled triangle");
        printf("\n3. check equilateral");
        printf("\n4. check exit");
        printf("Enter your choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter lenght of sides of a triangle");
            scanf("%d%d%d", &a, &b, &c);
            if (a + b > c && b + c > a && a + c > b)
                if (a == b || a == c || b == c)
                    printf("It is an isosceles triangle\n");
                else
                    printf("It is not an isosceles triangle\n");
            else
                printf("Not a valid triangle\n");
            break;
        case 2:
            printf("Enter lenght of sides of a triangle");
            scanf("%d%d%d", &a, &b, &c);
            if (a + b > c && b + c > a && a + c > b)
                if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
                    printf("It is a right angled triangle\n");
                else
                    printf("It is not a right angled triangle\n");
            else
                printf("Not a valid triangle\n");
            break;
        case 3:
            printf("Enter length of sides of a triangle");
            scanf("%d%d%d", &a, &b, &c);
            if (a + b > c && b + c > a && a + c > b)
                if (a == b && a == c)
                    printf("It is an equilateral triangle\n ");
                else
                    printf("It is  not an equilateral triangle\n ");
            else
                printf("Not a valid triangle\n");
            break;
        case 4:
            exit(0);
        default:
            printf("invaild choice, retry\n");
        }
    }
}