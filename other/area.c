#include<stdio.h>
int area(int a, int b)
{
    int res = a*b;
    return res;
}
int main()
{
    int a, b;
    printf("Enter the lenght: ");
    scanf("%d",&a);
    printf("Enter the breadth: ");
    scanf("%d",&b);
    int res = area(a,b);
    printf("The area of this rectangle is %d",res);
}