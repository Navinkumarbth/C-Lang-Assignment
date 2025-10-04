#include <stdio.h>
void p8();
int main()
{
    p8();
    return 0;
}
void p8()
{
    char x;
    printf("Enter a character");
    scanf("%c", &x);
    switch (x)
    {
    case 'a' ... 'z':
        printf("\nLowercase character");
        break;
    case 'A' ... 'Z':
        printf("\nUppercase character");
        break;
    default:
        printf("\nSpecial character");
    }
}