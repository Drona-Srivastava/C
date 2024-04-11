/*
Input the size and the values of a square matrix and print the lower triangular matrix
and upper triangular matrix.
*/

#include <stdio.h>
int main()
{
    int rows,columns;
    printf("Enter the number of rows of the matrix : ");
    scanf("%d",&rows);
    printf("Enter the number of columns of the matrix: ");
    scanf("%d",&columns);
    int mat[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter the element for the position %dX%d: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The upper triangular matrix is: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (i>j)
            {
                printf("0");
                printf("\t");
            }
            else
            {
                printf("%d",mat[i][j]);
                printf("\t");
            }        
        }
        printf("\n");
    }
    
    printf("The lower triangular matrix is: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (i<j)
            {
                printf("0");
                printf("\t");
            }        
            else
            {
                printf("%d",mat[i][j]);
                printf("\t");
            }
        }
        printf("\n");
    }
    
}