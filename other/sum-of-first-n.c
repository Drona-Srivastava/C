#include<stdio.h>
int sum(int x)
{
    if (x==1)
    {
        return 1;
    }
    else
    {
        return x + sum(x-1);
    }  
}
int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    int res = sum(x);
    printf("%d",res);
}