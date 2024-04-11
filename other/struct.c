#include<stdio.h>
struct book
{
    char name[100];
    char authname[100];
};

int main()
{
    struct book b;
    scanf("%s",b.name);
    scanf("%s",b.authname);
    printf("%s is the book written by %s",b.name,b.authname);
}
