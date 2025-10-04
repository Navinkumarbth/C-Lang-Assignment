#include <stdio.h>
int main()
{
    int day;
    printf("Enter day number");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Monday is a new begining");
        break;
    case 2:
        printf("Jai Bajrangbali");
        break;
    case 3:
        printf("Very nice day wednesday");
        break;
    case 4:
        printf("Jio man bhar ke");
        break;
    case 5:
        printf("Thank god its friday");
        break;
    case 6:
        printf("Very speial day");
        break;
    case 7:
        printf("Enjoy this day");
        break;
    default:
        printf("Invailid day number");
        break;
    }
    return 0;
}