#include<stdio.h>

void f3()
{
    int A[3][3], i, j, temp;

    // Input the matrix
    printf("Enter 9 numbers of the matrix: ");
    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 2; j++)
            scanf("%d", &A[i][j]);

    // Swap elements along the diagonal
    for (i = 0; i <= 2; i++)
    {
        temp = A[i][i];          // Swap A[i][i] with A[i][2-i] (diagonal swap)
        A[i][i] = A[i][2 - i];
        A[i][2 - i] = temp;
    }

    // Print the modified matrix
    printf("Modified matrix:\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }
}
