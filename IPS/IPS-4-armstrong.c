/*
Check if the given number is armstrong number or not.
*/
#include <stdio.h>
#include <math.h>

int count(int num)
{
    int count=0,digit;
    while (num!=0)
    {
        digit = num%10;
        num/=10;
        count++;
    }
    return count;
}
int armstrong(int num)
{
    int digit=0,arm=0,temp=num;
    if (num<=0 || num==1)
    {
        printf("Invalid Entry");
    }
    else
    {
        int len = count(num);
        while(temp!=0)
        {
            digit =  temp % 10;
            arm = arm + pow(digit,len);
            temp /=10;
            
        }
        if (arm==num)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
}


int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    armstrong(num);
}