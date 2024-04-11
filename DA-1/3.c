/*
Write a C program that enters your name as an input and prints the name again removing
all the vowels in it and interchanging the lower case to uppercase and uppercase to
lowercase.
Input: Manas Ranjan Prusty
Output: mNS rNJN pRSTY
*/
#include <stdio.h>
#include <ctype.h> 
#include <string.h>
int main() {
    char name[100];
    printf("Enter your name: ");
    scanf("%[^\n]s",name);

    printf("Output: ");
    for (int i = 0; i<strlen(name) ; i++) 
    {
        char c = name[i];
        if (c >= 'A' && c <= 'Z') 
        {
            c = tolower(c);
        } 
        
        else if (c >= 'a' && c <= 'z') 
        {
            c = toupper(c);
        }

        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
            c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') 
        {
            continue;
        }
        printf("%c", c);
    }
}
