/*
Palindromes in a Sentence
all the palindrome words in a sentence entered by the user. Join them as it is encountered in the sentence to form a new word and display it.
Consider the palindrome check as case-insensitive. Do not consider single characters as a palindrome. If no palindrome words are found then enter "Palindrome words does not exist"
ex:
input entry: The English Maam called Nayan and asked him to name a racecar.
palindrome words: Maam, Nayan and racecar
New word: MaamNayanracecar
input format:
the first line, enter the sentence
output Format:
the first line, display the new word if palindrome word(s) exist else print "Palindrome words does not exist"
*/

#include <stdio.h>
#include <string.h>
void palindrome(char word)
{
    char* p1=word;
    for (int i = 0; i<strlen(word)/2;i++)
    {
        for (int j = strlen(word); j>strlen(word)/2; j--)
        {
            if (*(p1+i)!=*(p1+j))
            {
                break;
            }
            else
            {
                printf("%c",word);
            }
        }
    }
    
}
int main()
{
    char input[100];
    char word[20];
    printf("Enter the sentence: ");
    scanf("%[^\n]s",input);
    int i=0;
    while (input[i]!='\0')
    {
        printf("%c",input[i]);
        if (input[i]!=' ' | input[i]!='.')
        {
            word[i]=input[i];
        }
        else
        {
            palindrome(word);
            for (int i=0; i<strlen(word);i++)
            {
                word[i]="\0";
            }
        }
        i++;
    }
}