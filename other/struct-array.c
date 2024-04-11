#include<stdio.h>
struct student
{
    char name [100];
    int x;
};

int main()
{
    struct student s[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%s",&s[i].name);
        scanf("%d",&s[i].x);
        printf("%s and %d",s[i].name,s[i].x);
    }
}
