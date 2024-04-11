/*
Input size and values in two arrays A and B, of max size 100. Then, compute A[i]+B[i]
and store in array C. Calculate the sum of the palindrome numbers alone. Note:
Consider a single digit number is also a palindrome
*/
#include <stdio.h>
#include <stdlib.h>

int palindrome(int num)
{
    int  reversed = 0, remainder, original,sum=0;
    original = num;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    if (original == reversed)
    {
        return original;        
    }
    else
    {
        return 0;
    }
}
int main()
{
    int s1, s2;
    printf("Enter the size of array A [max - 100]: ");
    scanf("%d",&s1);
    printf("Enter the size of array B [max - 100]: ");
    scanf("%d",&s2);
    int*pA = (int*) malloc(s1 * sizeof(int));
    int*pB = (int*) malloc(s2 * sizeof(int));
    
    for (int i = 0; i < s1; i++)
    {
        printf("Enter the %d element of A: ",i+1);
        scanf("%d",&pA[i]);
    }
    for ( int i = 0; i<s2; i++)
    {
        printf("Enter the %d element of B: ",i+1);
        scanf("%d",&pB[i]);
    }

    if (s1>s2)
    {
        pB =(int*) realloc(pB, s1 * sizeof(int));
        for (int i = s2; i < s1; i++)
        {
            pB[i]=0;
        }
    }
    else if (s2>s1)
    {
        pA =(int*) realloc(pA, s2 * sizeof(int));
        for (int i = s1; i < s2; i++)
        {
            pA[i]=0;
        }
    }

    int* pC = (int*) malloc(s1 * sizeof(int));
    int sizeC=0;
    if (s1>s2)
    {
        for (int i = 0; i < s1; i++)
        {
            pC[i] = pA[i] + pB[i];
        }
        sizeC = s1;
    }
    else if (s2>s1)
    {
        pC = (int*) realloc(pC , s2 * sizeof(int));
        for (int i = 0; i < s2; i++)
        {
            pC[i] = pA[i] + pB[i];
        }   
        sizeC=s2;
    }
    else if (s1==s2)
    {
        for (int i = 0; i < s1; i++)
        {
            pC[i] = pA[i] + pB[i];
        }   
        sizeC=s1;
    }
    

    int sum = 0;
    for (int i = 0; i < sizeC; i++)
    {
        int num = palindrome(pC[i]);
        sum = sum + num;
    }
    printf("%d",sum);
}