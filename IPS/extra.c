/*
VIT administration has a huge collection of student database which consists of student admission details. It contains the student's register number, name and the VITEE Rank they have obtained. The condition imposed is sorting has to happen in an ascending order only with respect to the VITEEE rank. Help the VIT management to sort the student details(records) using any sorting algorithm we have discussed. If the input format is not in the given order, print as "not in given order".
Input format: In the first line, take the number of students.
From the second line, take each student details (record) as a list. Register number is alphanumeric, Name is only alphabetic and rank is always an integer.
Output format: Sorted lists with respect to VITEEE rank, printed in those many lines as the number of records.

Sample Input 1:
4
19BCE1 Kalam 4
19BEC3 Linus 3
19BCE2 Jeff 1
19MEC5 Turina 2 


Sample Output 1:
19BCE2 Jeff 1
19MEC5 Turing 2
19BEC3 Linus 3
19BCE1 Kalam 4


Sample Input 2:
5
19MEC45 Sergey 11
19BEC3 Linus 54
19BCE2 Bjane 2
19MEC5 Prim 58
18EEE3 Kruskal 124


Sample Output 2:
19BCE2 Biane 2
19MEC45 Sergey 11
19BEC3 Linus 54
19MEC5 Prim 58


Sample Input 3:
4
19MEC45 Sergey 11
19BEC3 Linus 54
19BCE2 2 Bjane
19MEC5 Prim 58


Sample Output 3: not in given order
*/

#include <stdio.h>
int main()
{
    char regno[20] , name[100] , rank[100];
    int num;
    scanf("%d",num);
    for (int i=0 ; i<=num ; i++)
    {
        scanf("%s",&regno[i]);
        scanf("%s",&name[i]);
        scanf("%s",&rank[i]);   
    }

    char* rn = regno;
    char* n = name;
    char* r =rank;
    int sizern=0 ,sizen=0, sizer=0;
    for (int i=0;regno[i]!='\0';i++)
    {
        sizern++;
    }
    for (int i=0;name[i]!='\0';i++)
    {
        sizen++;
    }
    for (int i=0;rank[i]!='\0';i++)
    {
        sizer++;
    }

    for (int i=0; i<sizern; i++)
    {
        if ( (*(rn+i)<='a' & *(rn+i)<='z') || (*(rn+i)<='A' & *(rn+i)<='Z') || (*(rn+i)>='0' & *(rn+i)<='9'))
        {
            continue;
        }
        else
        {
            printf("not in given order");
            break;
        }
    }

    for (int i=0; i<sizen; i++)
    {
        if ( (*(rn+i)<='a' & *(rn+i)<='z') || (*(rn+i)<='A' & *(rn+i)<='Z'))
        {
            continue;
        }
        else
        {
            printf("not in given order");
            break;
        }
    }

    for (int i=0; i<sizer; i++)
    {
        if ( (*(rn+i)>='0' & *(rn+i)<='9'))
        {
            continue;
        }
        else
        {
            printf("not in given order");
            break;
        }
    }
}