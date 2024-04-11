/*Input the size and values of a 2D matrix. If any number in that matrix is greater than 10
then replace it with 0 and then display the transpose of the resultant matrix*/
#include <stdio.h>
int main()
{
    int rows,columns;
    printf("Enter the number of rows in the matrix: ");
    scanf("%d",&rows);
    printf("Enter the number og columns of the matrix: ");
    scanf("%d",&columns);
    int mat[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter the element for position %dX%d: ",i,j);
            scanf("%d",&mat[i][j]);
            if (mat[i][j]>10)
            {
                mat[i][j]=0;
            }
            else
            {
                continue;
            }
        }
    }

    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d\t",mat[j][i]);
        }
        printf("\n");
    }
}