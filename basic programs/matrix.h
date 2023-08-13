void matrix_subtraction(int m, int n, int matrix_A[m][n], int matrix_B[m][n])
{
    puts("subtraction of matrix A and B is : \n");

    // int *matrix = (int *)malloc(sizeof(int) * m * n);
    int matrix[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
             matrix[i][j]  =   matrix_A[i][j] - matrix_B[i][j];
        };
    };
    show_matrix(m, n, matrix);


}

void matrix_determinent(int size, int matrix[size][size])
{
    int determinent ;

    switch (size)
    {
    case 2:
         determinent =  matrix[0][0] * matrix[1][1] -  matrix[0][1] * matrix[1][0] ;

        break;
    case 3:
        determinent =  matrix[0][0] * ( matrix[1][1] *  matrix[2][2] -  matrix[1][2] * matrix[2][1] -
          matrix[0][1] * ( matrix[1][0] *  matrix[2][2] -  matrix[1][2] * matrix[2][0] )  +
            matrix[0][3] * ( matrix[1][0] *  matrix[2][1] -  matrix[1][1] * matrix[2][0] )  ;
    
    default:
        puts("not applicable determinent!!");
         break;
    };

    
    printf("determinent of matrix is : %d\n" , determinent);
}


void create_matrix(int m, int n, int matrix[m][n])
{

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("enter value of a%d%d : ", i + 1, j + 1);
            // scanf("%d", matrix + (i * n) + j); //matrix + (row_index * no_of_col) + col_index
            scanf("%d", &matrix[i][j]); 
        };
    };

    printf("------------//-----------\nmatrix is created : \n");

    show_matrix(m, n, matrix);
};




    /*
            col=3
          
            matrix + 0 *3 + 0 = [0][0]      //matrix  + 0
            matrix + 0 * 3 + 1 = [0][1]      //matrix  + 1
            matrix + 0 * 3 + 2 = [0][2]      //matrix  + 2

            matrix + 1 * 3 + 0 =  [1][0] //matrix + 3
            matrix + 1 * 3 + 1 = [1][1]  //matrix + 4
            matrix + 1 * 3  + 2 = [1][2]      //matrix  + 5

            matrix + 2 * 3 + 0 =  [2][0] //matrix + 6
            matrix + 2 * 3 + 1 = [2][1]  //matrix + 7
            matrix + 2 * 3  + 2 = [2][2]      //matrix  + 8

            // *(matrix + ( i * n ) + j ) = i+j;
                      */


void matrix_multiplication(int m, int n, int matrix_A[m][n], int matrix_B[m][n])
{
    puts("multiplication of matrix A and B is : \n");

    int matrix[m][n] ;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int sum = 0;

            for (int k = 0; k < n; k++)
            {
                // sum += (*(matrix_A + (i * n) + k)) * (*(matrix_B + (i * n) + k));
                sum += matrix_A[i ][k] * matrix_B[k][j];
            }
            matrix[i][j] = sum;
        };
    };
    show_matrix(m, n, matrix);
}