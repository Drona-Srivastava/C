/*
Password Check
Ritika and John have developed a software containing python programs for the satellite application for “Aditya-L1” which will be invoked when it landed on the moon on September 2, 2023. They have stored this software in their computer machine which needs to be secured heavily. They would like to create a password for their machine. To create this, they came up with the following requirements:
A strong password is the one which:
- should be 9-11 characters long
- it should be alphanumeric(containing alphabets and digits). Alphanumeric means the presence of atleast 1 digit and 1 alphabet (need not be both lower and upper case).
- it should have atleast one of the special characters from the given list:  {@, $, !, %, #}                          
Weak Password:
- contains 6 – 8 characters
- contains alphanumeric characters(need not be both lower and upper case).
If it is a strong password, print valid and strong” or else “valid and weak”. If the password does not fall into any of these categories, then print as “invalid”.
Input Format:
In the first line get the password as input.
Output Format:
In the first line print whether it is invalid or valid along with strong or weak
*/

#include <stdio.h>
int main()
{
    char pass[1000];
    printf("Enter your password: ");
    scanf("%s",&pass);
    int size=0;
    for (int i=0;pass[i]!='\0';i++)
    {
        size++;
    }
    char* p = pass;
    int digit=0;
    int alpha=0;
    int charachter=0;
    for (int i=0 ; i<size ; i++)
    {
        if ((*(p+i) >= 'a' && *(p+i)<= 'z') || (*(p+i) >= 'A' && *(p+i) <= 'Z'))
        {
            alpha++;
        }
        else if (*(p+i)>='0' & *(p+i)<='9')
        {
            digit++;
        }
        else if (*(p+i)=='@' || *(p+i)=='$' || *(p+i)=='!' || *(p+i)=='%' || *(p+i)=='#')
        {
            charachter++;
        }
        
    }
    
    if (size>=6 & size<=8 & alpha>=1 & digit>=1 )
    {
        printf("\nvalid and weak");
    }

    else if (size>=9  & size<=11 & alpha>=1 & digit>=1 & charachter>=1)
    {
        printf("valid and strong");
    }
    
}