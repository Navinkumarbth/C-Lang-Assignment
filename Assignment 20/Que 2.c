// Write a program to calculate the pproduct of two matrices each of order 3*3.
#include <stdio.h>

void f2()
{
    int A[3][3], B[3][3], C[3][3], i, j;
    printf("Enter 9 numbers of first matrix: ");
    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 2; j++)
            scanf("%d", &A[i][j]);

    printf("Enter 9 numbers of Second matrix: ");
    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 2; j++)
        scanf("%d", &B[i][j]);
            
   
}

int main()
{
    f2();
    printf("\n");
    return 0;
}