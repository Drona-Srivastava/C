/*
Write a C program that takes a VIT register number as an input string and then calculate
the LCM of all even numbers and all odd numbers in the string and finally prints the
GCD of both the LCMs. Note: do not consider ‘0’.
Ex: If register no is 23BAI1453, then
Even numbers = 2, 4; LCM = 4
Odd numbers = 3, 1, 5, 3; LCM = 15
GCD (4, 15) = 1
*/

#include <stdio.h>

int gcd(int a, int b) 
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) 
{
    return (a * b) / gcd(a, b);
}

int calculateLCM(char *str, int isEven) 
{
    int num = 0, result = 0;
    while (*str) 
    {
        if (*str >= '0' && *str <= '9') 
        {
            num = (*str) - '0';
            if ((num % 2 == 0 && isEven) || (num % 2 != 0 && !isEven)) 
            {
                if (result == 0)
                    result = num;
                else 
                    result = lcm(result, num);
            }
        }
        str++;
    }
    return result;
}

int main() 
{
    char str[100];
    printf("Enter the VIT register number: ");
    scanf("%s", str);

    int evenLCM = calculateLCM(str, 1);
    int oddLCM = calculateLCM(str, 0);  

    printf("LCM of even numbers: %d\n", evenLCM);
    printf("LCM of odd numbers: %d\n", oddLCM);

    int result = gcd(evenLCM, oddLCM);
    printf("GCD of LCMs: %d\n", result);

    return 0;
}
