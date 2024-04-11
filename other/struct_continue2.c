#include <stdio.h>
#include <string.h>

struct Book
{
    char name[100];
    char author[100];
    float price;
}; //important, dont forget semicolon

void input(struct Book b)
{
    printf("enter the details:\n");
    
    printf("Name of book: ");
    scanf("%s", b.name);  
    printf("Name of Author: ");
    scanf("%s", b.author);
    printf("Price of book: ");
    scanf("%f", &b.price); 

//everything is being stored in b variable(local to this func)

    printf("In input func");
    display(b);
}


int display(struct Book b) 
{
    printf("Book name: %s\n", b.name);
    printf("Author name: %s\n", b.author);
    printf("Book Price: %0.2f\n", b.price);
    printf("\n");  // wont print anything since input function is not returning any value
    return 1;
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
    
    input(book1); //local to main function
    input(book2);

    printf("Details of book are:\n");
  
    display(book1); //book1 local to main function : 
    display(book2);

    check(book1,book2);
    
}