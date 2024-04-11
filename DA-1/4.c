/*
Write a C program, which will print two digit numbers whose sum of both digit is
multiple of seven. e.g. 16, 25, 34......
*/

#include <stdio.h>
int main()
{
    for (int num = 10; num <100; num++)
    {
        int num2 = num%10;
        int num1 = num/10;
        int sum = num1+num2;
        if(sum%7==0)
        {
            printf("%d\n",num);
        }
    }
    
}

