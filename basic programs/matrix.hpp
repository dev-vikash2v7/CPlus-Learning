#include <iostream>
using namespace std;

class Matrix
{
private:
    int m,n;
    /* data */
public:
    void matrix_show(int m, int n, int mat[m][n]){
         printf("matrix of size %d * %d is : %d\n", m, n , mat);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j] );
        };
        puts("");
    };
    puts("");
    };
    void matrix_addition();
    void matrix_subtraction();
    void matrix_determinent();
    void matrix_multiply(int , int , int , int );
    void matrix_create(int , int, int);
};


// void Matrix :: matrix_show(int m, int n, int *mat){
//     printf("matrix of size %d * %d is : %d\n", m, n , mat);

//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("%d ", mat[i][j] );
//         };
//         puts("");
//     };
//     puts("");
// }


// void Matrix :: matrix_addition(int m , int n ,  int matrix_A[m][n], int matrix_B[m][n])
// {
//     puts("addition of matrix A and B is : \n");

//     // int *matrix = (int *)malloc(sizeof(int) * m * n);
//     int matrix[m][n];

//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//              matrix[i][j]  =   matrix_A[i][j] + matrix_B[i][j];
//         };
//     };
//     matrix_show(m, n, matrix);
// }



// void Matrix ::matrix_subtraction(int m, int n, int matrix_A[m][n], int matrix_B[m][n])
// {
//     puts("subtraction of matrix A and B is : \n");

//     // int *matrix = (int *)malloc(sizeof(int) * m * n);
//     int matrix[m][n];

//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//              matrix[i][j]  =   matrix_A[i][j] - matrix_B[i][j];
//         };
//     };
//     matrix_show(m, n, matrix);


// }

// void Matrix :: matrix_determinent(int size, int matrix[size][size])
// {
//     int determinent ;

//     switch (size)
//     {
//     case 2:
//          determinent =  matrix[0][0] * matrix[1][1] -  matrix[0][1] * matrix[1][0] ;

//         break;
//     case 3:
//         determinent =  matrix[0][0] * ( matrix[1][1] *  matrix[2][2] -  matrix[1][2] * matrix[2][1] -
//           matrix[0][1] * ( matrix[1][0] *  matrix[2][2] -  matrix[1][2] * matrix[2][0] )  +
//             matrix[0][3] * ( matrix[1][0] *  matrix[2][1] -  matrix[1][1] * matrix[2][0] )  ;
    
//     default:
//         puts("not applicable determinent!!");
//          break;
//     };

    
//     printf("determinent of matrix is : %d\n" , determinent);
// }


// void  Matrix ::matrix_create (int m, int n, int matrix[m][n])
// {

//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("enter value of a%d%d : ", i + 1, j + 1);
//             // scanf("%d", matrix + (i * n) + j); //matrix + (row_index * no_of_col) + col_index
//             scanf("%d", &matrix[i][j]); 
//         };
//     };

//     printf("------------//-----------\nmatrix is created : \n");

//     matrix_show(m, n, matrix);
// };



// void Matrix :: matrix_multiply(int m, int n, int matrix_A[m][n], int matrix_B[m][n])
// {
//     puts("multiplication of matrix A and B is : \n");

//     int matrix[m][n] ;

//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             int sum = 0;

//             for (int k = 0; k < n; k++)
//             {
//                 // sum += (*(matrix_A + (i * n) + k)) * (*(matrix_B + (i * n) + k));
//                 sum += matrix_A[i ][k] * matrix_B[k][j];
//             }
//             matrix[i][j] = sum;
//         };
//     };
//     matrix_show(m, n, matrix);
// }
