#include <stdio.h>
#include <string.h>

struct Book
{
    char name[100];
    char author[100];
    float price;
}; //important, dont forget semicolon


void display(struct Book b) //struc name has to be same
{
    printf("Book name: %s\n", b.name);
    printf("Author name: %s\n", b.author);
    printf("Book Price: %0.2f\n", b.price);

}

void check(struct Book a, struct Book b)
{if(a.price>b.price)
    {
        printf("\n");
        printf("The expensive one is: %s\n", a.name);
        display(a);
    }
    else
    {
        printf("\n");
        printf("The expensive one is; %s", b.name);
        display(b);

    }
}
int main()
{
    struct Book book1;
    struct Book book2;
    printf("enter the details:\n");
    
    printf("Name of book: ");
    scanf("%[^\n]s", book1.name);  //array name doesnt need &
    printf("Name of Author: ");
    scanf("%[^\n]s", book1.author);
    printf("Price of book: ");
    scanf("%f", &book1.price); //needs &
    display(book1); //object needs to be sent

    printf("Name of book: ");
    scanf("%s", book2.name);  //array name doesnt need &
    printf("Name of Author: ");
    scanf("%s", book2.author);
    printf("Price of book: ");
    scanf("%f", &book2.price); //needs &

    printf("Details of book are:\n");
    display(book2); //object needs to be sent
    

    //print the details of the most expensive price

    check(book1,book2);
    
}