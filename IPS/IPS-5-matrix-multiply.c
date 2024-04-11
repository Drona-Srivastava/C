/*
Square Matrix
A square matrix is a matrix that has an equal number of rows and columns. Given two 2-dimensional matrices, print “Invalid” if matrix multiplication is not feasible. Print “No” if multiplication of these matrices is possible but it does not yield a square matrix. If the resultant matrix is a square matrix then print the sum of only the even numbers in that matrix. If the resultant square matrix does not contain an even number then print ‘0’
Input format
In the first line, enter the rows and column of the first matrix separated by a space
In the second line, enter the rows and column of the second matrix separated by a space
In the third line, enter the elements of the first matrix, row by row in a single line separated by spaces
In the fourth line, enter the elements of the second matrix, row by row in a single separated by spaces
Output format
Print “Invalid” or “No” or the sum or ‘0’
*/

#include <stdio.h>
int main()
{
    int mat1[3], mat2[3];
    printf("Enter rows in matrix 1: ");
    scanf("%d",mat1); //matrix1 row in array mat1 pos 0
    printf("Enter columns in matrix 1: ");
    scanf("%d",mat1+1); //matrix1 column in array mat1 pos 1
    int* p1 = mat1; 
    printf("Enter rows in matrix 2: ");
    scanf("%d",mat2); //matrix2 rows in array mat2 pos 0
    printf("Enter columns in matrix2: "); 
    scanf("%d",mat2+1); //matrix2 column in array mat2 pos 1
    int* p2 = mat2;
    int matrix1[*p1][*(p1+1)], matrix2[*p2][*(p2+1)]; // creating matrices with given rows and columns
    if (*(p1+1)!=*p2) // column of matrix1 not equal to rows of matrix2
    {
        printf("Invalid"); // multiplication not possible 
    }
    else if (*(p1+1)==*p2 & *p1!=*(p2+1))  // column of matrix1 == row of matrix2 --> multiplication possible 
    //row of matrix1 != column of matrix2 --> not a square matrix
    {
        printf("No");
    }
    else if (*(p1+1)==*p2 & *p1==*(p2+1)) // is square matrix 
    {
        printf("Enter elements for matrix 1 \n");
        for (int i = 0; i < *p1 ; i++) //taking input coz square matrix forming  
        {
            for (int j = 0; j <*(p1+1); j++)
            {
                printf("Position %dX%d: ",i,j);
                scanf("%d",&matrix1[i][j]);
            }
        }

        printf("Enter elements for matrix 2  \n");
        for (int i = 0; i < *p2 ; i++) //inserting data in second matrix
        {
            for (int j = 0; j <*(p2+1); j++)
            {
                printf("Position %dX%d: ",i,j);
                scanf("%d",&matrix2[i][j]);
            }
        }

        int result[*p1][*(p2+1)]; //creating result matrix
        int elements=0;
        for (int i = 0; i < *p1; i++)
        {
            for (int j = 0; j < *(p2+1); j++)
            {
                for (int k = 0; k < *(p2); k++)
                {
                    elements = elements +( matrix1[i][k] * matrix2[k][j] ); //multiplying and adding in elements of result matrix
                }
                result[i][j]=elements;
                elements=0;
            }
        }

        int sum=0;
        for(int i=0;i< *p1;i++)
        {
            for(int j=0;j<*p1;j++)
            {
                if (result[i][j]%2==0)
                {
                    sum = sum + result[i][j]; // getting sum of even numbers in result matrix
                }
                else
                {
                    sum=sum;
                }   
            }
        }
        printf("The resultant mtrix is: \n");
        for (int i = 0; i < *p1; i++)
        {
            for (int j = 0; j < *(p2+1); j++)
            {
                printf("%d\t",result[i][j]);
            }
            printf("\n");
        }
        
        printf("The sum of resultant matrix is %d",sum); //priting the sum
    }
}