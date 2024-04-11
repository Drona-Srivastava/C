#include <stdio.h>
void factorial(int x)
{
    int fact = 1;
    for (int i = x; i > 0; i--)
    {
        fact = fact * i;
    }
    printf("%d",fact);
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    factorial(num);
}