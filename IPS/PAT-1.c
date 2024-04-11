/*
Generate Username and Password
You are asked to write a code that generates the default username and password for college mail id. In this regard, you are asked to take an input from the user which contains the following format
User Input:
	<FirstName><space><LastName><space><YearOfJoining><space><RegNo>
	Manas Prusty	2023 23BCE1234
Generated Username:
	<FirstName><dot><LastName><YearOfJoining>@vitstudent.ac.in
	Manas.Prusty2023@vitstudent.ac.in
Generated Password:
	<RegNo>
	23BCE1234

NB: Year of Joining must be of 4 characters and Register No must be of 10 characters. If either of them is not matching then print “Invalid Entry”. All the four entries by the user are mandatory.

Input Format:
In the first line, enter the first name, last name, year of joining and the register number in a single line separated with a space.
Output Format:
In the first line, print the username if the entry is valid else print “Invalid Entry”
In the second line, print the password if the entry is valid

TEST CASES
Sample Input1:
Manas Prusty	2023 23BCE1234
Sample Output1:
Manas.Prusty2023@vitstudent.ac.in
23BCE1234

Sample Input2:
Manas Prusty	20235 23BCE1234
Sample Output2:
Invalid Entry

Sample Input3:
Manas Prusty	2023 23BCE12345
Sample Output3:
Invalid Entry

Sample Input4:
Manas	2023 23BCE12345
Sample Output3:
Invalid Entry
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char fname[100],lname[100],yoj[100],regno[100];
    scanf("%s",&fname);
    scanf("%s",&lname);
    scanf("%s",&yoj);
    scanf("%s",&regno);
    if (strlen(fname)>1 && strlen(lname)>1 && strlen(yoj)==4 && strlen(regno)==9)
    {
        printf("%c",fname);
        printf(".");
        printf("%c",lname);
        printf("%c",yoj);
        printf("@vitstudent.ac.in");
        printf("\n%c",regno);
    }
    
}