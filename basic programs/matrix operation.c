#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

int main()
{
    int m1, n1, m2, n2;

    printf("enter data of matrix A :\nrows : ");
    scanf("%d", &m1);
    printf("columns : ");
    scanf("%d", &n1);

    printf("enter data of matrix B :\nrows : ");
    scanf("%d", &m2);
    printf("columns : ");
    scanf("%d", &n2);

    int matrix_A[m1][n1], matrix_B[m2][n2];

    if (n1 == m2)
    {
        printf("matrix multiplication is possible and have matrix of size %d * %d\n", m1, n2);

        create_matrix(m1, n1, matrix_A);

        create_matrix(m2, n2, matrix_B);
    }
    else
    {
        printf("matrix multiplication is not possible as m1 and n2 are not same  ");
        exit(0);
    }

    // matrix_multiplication(m1, n2, matrix_A, matrix_B);

    if (m1 == m2 && n1 == n2)
    {
        int m = m1, n = n1;
        matrix_addition(m, n, matrix_A, matrix_B);
        matrix_subtraction(matrix_A, matrix_B);
    }
    else{
        puts("operation not possible!!!!!");
    }

    // matrix_determinent(m1 , matrix_A) ;

    return 0;
}