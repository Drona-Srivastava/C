/*
From the generated two numbers in Q5, find the greatest common divisor (gcd) of two
integers using recursion. If you have a gcd for the two integers, print the gcd value. If
any one of the integer is 0, print NO. If only one integer is given, print as INVALID.
Ex: GCD(20,14) = 2
*/

#include <stdio.h>

int gcd(int a, int b) 
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int input;
    printf("Enter the last four digits of your registration number: ");
    scanf("%d",&input);
    int num1 = input/100;
    int num2 = input%100;
    int res=gcd(num1,num2);
    if (num1!=0 && num2!=0)
    {
        printf("The GCD is %d",res);
    }
    else{
        printf("NO");
    }
}


