/*
You are given a sentence without any special characters (not even full stop) and the words are separated only with spaces. The sentence can contain alphanumeric or numbers as a word also. Write a C program that reads a line from the user and prints each word in the sentence in a separate line as the output and finally prints the number of words in that sentence.
*/


#include <stdio.h>
#include <string.h>
int main()
{
    int count=1;
    char sentence[10000];
    char* p = sentence;
    printf("Enter the name: ");
    scanf("%[^\n]s",sentence);
    int lenght = strlen(sentence);
    for(int i=0 ; i<lenght ; i++)
    {
        if (*(p+i)!=' ')
        {
            printf("%c",*(p+i));
        }
        else if (*(p+i)==' ')
        {
            printf("\n");
            count++;
        }
        else if (*(p+i)=='\0')
        {
            continue;
        }        
    }
    printf("\n%d",count);
}