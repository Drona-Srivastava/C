#include <stdio.h>
#include <string.h>

int main() {
    char word[100];

    printf("Enter a word: ");
    scanf("%s", word);
    int size=0;
    for (int i = 0; i<100; i++)
    {
        if (word[i]!='\0')
        {
            size++;
        }
        else
        {
            break;
        }
    }

    int flag = 0;
    for (int i=0 ,j=size-1;j>=0, i < size;j--, i++)
    {
        if (word[i]!=word[j])
        {
            printf("Not a palindrome");
            break;
        }
        else
        {
            flag++;
        }
    }
    
    if (flag==size)
    {
        printf("Is a Palindrome");
    }
    
    
}