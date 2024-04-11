#include <stdio.h>
#include <string.h>

struct Book
{
    char name[100];
    char author[100];
    float price;
}; //important, dont forget semicolon


int main(void)
{
    //all variable in structure are called attributes
    // int = struct book here
    //a = (object name) book1
    // . dot operateor to acces attributes in a structure

    struct Book book1;
    strcpy(book1.name,"book");
    strcpy(book1.author,"author1");
    book1.price=100;

    printf("Details of book are:\n");
    printf("Book name: %s\n", book1.name);
    printf("Author name: %s\n", book1.author);
    printf("Book Price: %0.2f\n", book1.price);

    
}