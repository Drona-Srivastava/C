#include <stdio.h>
#include <string.h>

struct Book
{
    char name[100];
    char author[100];
    float price;
}; //important, dont forget semicolon

void input(struct Book* b)
{
    printf("enter the details:\n");
    
    printf("Name of book: ");
    scanf("%s", b->name);  //->
    printf("Name of Author: ");
    scanf("%s", b->author);
    printf("Price of book: ");
    scanf("%f", &b->price); 

    //printf("In input func");
    //display(b);

// or could simply return b
}


void display(struct Book b) 
{
    printf("Book name: %s\n", b.name);
    printf("Author name: %s\n", b.author);
    printf("Book Price: %0.2f\n", b.price);
    printf("\n");  //will work now

}

void check(struct Book a, struct Book b)
{if(a.price>b.price)
    {
        printf("\n");
        printf("The expensive one is; %s", a.name);
        display(a);
    }
    else
    {
        printf("\n");
        printf("The expensive one is; %s", b.name);
        display(b);

    }
}
int main(void)
{

    struct Book book1;
    struct Book book2;
    
    input(&book1); //& used (pass by reference - cuz we are defining)
    input(&book2);

    printf("Details of book are:\n");
    //display(book1); //object needs to be sent
    display(book1); 
    display(book2); // address not used - cuz we just want to display
   

    check(book1,book2); //no need for address here
    
    //call by value when we dont need anything as return
    //when we want to return it and then use it somewhere - call by refernce
}

//take an array of structures
// 5 books
//find most expensive and least expensive

//array of Structure Book which contains book1, book2, book3
//struct Book bookArr[5]; book1, book2;
