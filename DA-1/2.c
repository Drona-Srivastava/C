/*
Write a C program that takes the integers alone from the VIT register number as an
input and prints the frequency of each integer.
Ex: If register no is 23BCE1662, then
2 occurs 2 times
3 occurs 1 times
1 occurs 1 times
6 occurs 2 times
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char input[10];
    int count[10] = {0};
    printf("Enter the registration number: ");
    scanf("%s", input);

    int len = strlen(input);
    for (int i = 0; i < len; i++)
    {
        if (input[i] >= '0' && input[i] <= '9')
        {
            int num = input[i] - '0';
            count[num]++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (count[i] > 0)
        {
            printf("%d occurs %d times\n", i, count[i]);
        }
    }
}