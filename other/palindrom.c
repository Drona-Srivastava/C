#include <stdio.h>
int main()
{
    int num, reversed = 0 , remainder;
    printf("Enter your number: ");
    scanf("%d",&num);
    int original = num;
    while (num!=0)
    {
        remainder = num % 10;
        reversed  = reversed * 10 + remainder;
        num /= 10;
    }
    if(reversed = original){
        printf("%d is palindrome.",original);
    }
    else{
        printf("%d is not a palindrome.",original);
    }
}