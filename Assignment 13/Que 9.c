#include <stdio.h>
void vijay();
int main()
{
    vijay();
    return 0;
}
void vijay()
{

    char ch;
    printf("Enter a character");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%c is vowel\n",ch);
        break;
    case 'b' ... 'd':
    case 'f' ... 'h':
    case 'j' ... 'n':
    case 'p' ... 't':
    case 'v' ... 'z':
    case 'B' ... 'D':
    case 'F' ... 'H':
    case 'J' ... 'N':
    case 'P' ... 'T':
    case 'V' ... 'Z':
        printf("%c is consonant\n",ch);
        break;
    default:
        printf("%c is special character\n");
    }
}