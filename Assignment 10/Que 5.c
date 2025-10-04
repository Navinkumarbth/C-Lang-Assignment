#include <stdio.h>
int main()
{
    int a, b, h;
    printf("Enter two numbers");
    scanf("%d %d", &a, &b);
    for (h = a < b ? a : b; h >= 1; h--)
    {
        if (h==1)
        {
          printf("Coprime number");
            break;
        }
    }
  
    return 0;
}  