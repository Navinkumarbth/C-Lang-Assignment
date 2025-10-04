#include <stdio.h>
int main()
{
    int ram;
    printf("Enter a number");
    scanf("%d", &ram);
    switch (ram)
    {
    case 1:
        if (ram == 1)
        {
            printf("Good");
            break;
        }
    case 2:
        if (ram == 2)
        {
            printf("Better");
            break;
        }
    case 3:
        if (ram == 3)
        {
            printf("Best");
            break;
        }
    default:
        printf("Invailid");
        break;
    }
    return 0;
}