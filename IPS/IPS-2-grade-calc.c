/*
Write a C program using switch-case that takes the mark of a student as an integer and prints the grade of a student based on the following
91-100 --- O grade
81-90 ----- A grade
61-80 ----- B grade
51-60 ----- C grade
<=50 ------ F grade
The mark entered must be within the range 0 <= mark <= 100. Print “Invalid Entry” if it does not satisfy this. Do not use if-else statement for finding the grading.
*/

#include<stdio.h>
int main()
{
    int mark;
    scanf("%d",&mark);
    if (mark<0 && mark>100)
    {
        printf("Invalid Entry");
    }
    else
    {
        int marks=mark/10;
        switch(marks)
        {
            case 10:
            case 9:
                printf("O");
                break;
            case 8:
                printf("A");
                break;
            case 7:
            case 6:
                printf("B");
            case 5:
                printf("C");
                break;
            case 4:
            case 3:
            case 2:
            case 1:
            case 0:
                printf("F");
                break;
        }
    }
    
}
