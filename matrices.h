#include <stdio.h>

/**
 * Function to add two matrices
 * This function will prompt the user to enter the number of rows and columns of the two matrices
 * It will then prompt the user to enter the elements of the two matrices
 * It will then add the two matrices and display the result
 * If the matrices are incompatible, it will display an error message
 */
void matrix_sum()
{
    // Declare the variables
    int rows1,columns1,rows2,columns2;

    // Get the number of rows and columns of the matrices

    // Get the number of rows of the first matrix
    printf("Enter the number of rows of matrix 1:");
    scanf("%d",&rows1);

    // Get the number of columns of the first matrix
    printf("Enter the number of columns of matrix 1:");
    scanf("%d",&columns1);

    // Get the number of rows of the second matrix
    printf("Enter the number of rows of matrix 2:");
    scanf("%d",&rows2);

    // Get the number of columns of the second matrix
    printf("Enter the number of columns of matrix 2:");
    scanf("%d",&columns2);

    //Check if matrices are compatible for addition

    if(rows1 != rows2 || columns1 != columns2){
        printf("\n\tThe matrices are incompatible\n");
        return;
    }
    else{
        // Declare the matrices
        float a[rows1][columns1];
        float b[rows2][columns2];
        float c[rows1][columns1];

        // Input the elements of the first matrix
        for(int i=0; i<rows1; i++){
            printf("Enter the members of matrix 1 row %d :", i+1);
            for(int j = 0; j < columns1; j++){
                scanf("%f", &a[i][j]);
            }
        }

        // Input the elements of the second matrix
        for(int i=0; i < rows2; i++){
            printf("Enter the members of matrix 2 row %d :",i+1);
            for(int j = 0; j < columns2; j++){
                scanf("%f",&b[i][j]);
            }
        }

        // Add the two matrices
        for(int i = 0; i < rows1; i++){
            for(int j = 0; j < columns1; j++){
                c[i][j]=a[i][j]+b[i][j];
            }
        }

        // Display the sum of the two matrices
        printf("The sum of both matrices is\n:");
        for(int j = 0; j < columns1; j++){
            for(int i = 0; i < rows1; i++){
                printf("\t\t %.0f",c[i][j]);
            }
            printf("\n");   
        }
    } 
}

/**
 * Function to multiply two matrices
 * This function will prompt the user to enter the number of rows and columns of the two matrices
 * It will then prompt the user to enter the elements of the two matrices
 * It will then multiply the two matrices and display the result
 * If the matrices are incompatible, it will display an error message
 */

void matrix_product()
{
    // Declare the variables
    int rows1,columns1,rows2,columns2;

    // Get the number of rows of the first matrix
    printf("Enter the number of rows of matrix 1:");
    scanf("%d",&rows1);

    // Get the number of columns of the first matrix
    printf("Enter the number of columns of matrix :");
    scanf("%d",&columns1);

    // Get the number of rows of the second matrix
    printf("Enter the number of rows of matrix 2:");
    scanf("%d",&rows2);

    // Get the number of columns of the second matrix
    printf("Enter the number of columns of matrix 2:");
    scanf("%d",&columns2);

    // Check if matrices are compatible for multiplication
    if(columns1 != rows2){
        printf("\nThe matrices are incompatible\n");
        return;
    }
    else {
        // Declare the matrices
        float a[rows1][columns1];
        float b[rows2][columns2];
        float c[rows1][columns1];

        // Input the elements of the first matrix
        for(int i=0; i<rows1; i++){
            printf("Enter the members of matrix 1 row %d :", i+1);
            for(int j = 0; j < columns1; j++){
                scanf("%f", &a[i][j]);
            }
        }

        // Input the elements of the second matrix
        for(int i=0; i < rows2; i++){
            printf("Enter the members of matrix 2 row %d :",i+1);
            for(int j = 0; j < columns2; j++){
                scanf("%f",&b[i][j]);
            }
        }

        // Multiply the two matrices
        for(int i = 0; i < rows1; i++){
            for(int j = 0; j < columns2; j++){
                c[i][j]=0;
                for(int k = 0; k < columns1; k++){
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        // Display the product of the two matrices
        printf("The product of both matrices is\n:");
        for(int j = 0; j < columns2; j++){
            for(int i = 0; i < rows1; i++){
                printf("\t\t %.0f",c[i][j]);
            }
            printf("\n");   
        }
    }
}

/**
 * Function to transpose a matrix
 * This function will prompt the user to enter the number of rows and columns of the matrix
 * It will then prompt the user to enter the elements of the matrix
 * It will then transpose the matrix and display the result
 */
void matrix_transpose(){
    int rows, columns;

    printf("Enter the number of rows of the matrix:");
    scanf("%d",&rows);
    printf("Enter the number of columns of the matrix:");
    scanf("%d",&columns);

    float a[rows][columns];

    // Input the elements of the matrix
    for(int i=0; i<rows; i++){
        printf("Enter the members of matrix row %d :", i+1);
        for(int j = 0; j < columns; j++){
            scanf("%f", &a[i][j]);
        }
    }

    // Transpose the matrix
    float b[columns][rows];
    for(int i = 0; i < columns; i++){
        for(int j = 0; j < rows; j++){
            b[i][j] = a[j][i];
        }
    }

    // Display the transpose of the matrix
    printf("The transpose of the matrix is\n:");
    for(int j = 0; j < rows; j++){
        for(int i = 0; i < columns; i++){
            printf("\t\t %.0f",b[i][j]);
        }
        printf("\n");   
    }
}

