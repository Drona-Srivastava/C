/*
Input the last four digit alone from the VIT register number as an integer input. Then
form two numbers from it and checks if any of the numbers is an ugly prime number or
not. A given number is ugly prime number if its prime factor contains only among 2, 3
or 5.
Ex: Register Number: 23BRS2014
Input: 2014
Two numbers: 20, 14
Prime factors of 20= 2 and 5. Hence it is ugly prime number
Prime factors of 14=2 and 7. Hence it is not an ugly prime number
*/

#include <stdio.h>

int isUglyPrime(int num) 
{
    while (num % 2 == 0) 
    {
        num /= 2;
    }
    while (num % 3 == 0) 
    {
        num /= 3;
    }
    while (num % 5 == 0) 
    {
        num /= 5;
    }
    return num ;
}
int main()
{
    int input;
    printf("Enter the last four digits of your registration number: ");
    scanf("%d",&input);
    int num1 = input/100;
    int num2 = input%100;
    int res1=isUglyPrime(num1);
    int res2=isUglyPrime(num2);
    if (res1==1 && res2==1)
    {
        printf("%d is an ugly prime number\n",num1);
        printf("%d is an ugly prime number",num2);
    }
    else if (res1!=1 && res2==1)
    {
        printf("%d is not an ugly prime number\n",num1);
        printf("%d is an ugly prime number",num2);
    }
    else if (res1==1 && res2!=1)
    {
        printf("%d is an ugly prime number\n",num1);
        printf("%d is not an ugly prime number",num2);
    }
    else if (res1!=1 && res2!=1)
    {
        printf("%d is not an ugly prime number\n",num1);
        printf("%d is not an ugly prime number",num2);
    }
}