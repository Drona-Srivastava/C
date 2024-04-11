/*Input date, month and year from the user, and using switch case, display in worded
format.
Input: d=16, m=7, y=1992
Output: 16th July, 1992*/
#include <stdio.h>
int main() 
{
    int d, m, y;
    printf("Enter the date (day month year): ");
    scanf("%d",&d);
    scanf("%d",&m);
    scanf("%d",&y);
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    printf("%d", d);
    switch(d) 
    {
        case 1:
        case 21:
        case 31:
            printf("st");
            break;
        case 2:
        case 22:
            printf("nd");
            break;
        case 3:
        case 23:
            printf("rd");
            break;
        default:
            printf("th");
    }
    printf(" %s, ", months[m - 1]);
    printf("%d\n", y);
}



