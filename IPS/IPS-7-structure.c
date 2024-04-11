/*
Aggregate Marks using Structure
Find the aggregate marks attained by a student out of 100 in a particular course in VIT. As known, the components are DA1, DA2, Quiz, CAT1, CAT2 and FAT whose individual weightage is 10%, 10%, 10%, 15%, 15% and 40% respectively. The full marks for these exams are 10 marks each for the Das, 50 marks each for the CATs and 100 marks for the FAT. A student has to get at least 40% in FAT and an overall aggregate of 50% from all the assessment components to clear a subject. On clearing he gets “PASS” grade else gets “FAIL”
Use a structure named Student that has student name, student reg no, all the five assessment components as members. Use a function named “Calculate” that calculates the aggregate marks and another function named “display” that displays the aggregate marks. Table 1 respresents a sample for better understanding.
Input Format:
In the first line, enter the name of the student.
In the second line, enter the register number of the student.
In the third line, enter the marks obtained in DA1.
In the fourth line, enter the marks obtained in DA2.
In the fifth line, enter the marks obtained in Quiz.
In the sixth line, enter the marks obtained in CAT1.
In the seventh line, enter the marks obtained in CAT2.
In the eighth line, enter the marks obtained in FAT.
Output Format:
In the first line, print the name of the student
In the second line, print the register number of the student
In the third line, print the aggregate marks up to one decimal point
In the fourth line, print “PASS” or “FAIL”
Sample Input 1:
Sumit
23BRS1420
9
10
8
37
41
72
Sample Output 1:
Sumit
23BRS1420
79.2
PASS
*/
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char regno[15];
    float da1, da2, quiz, cat1, cat2, fat;
    float aggregate;
};

float Calculate(struct Student s) {
    float total = s.da1 + s.da2 + s.quiz + (s.cat1*15)/50 + (s.cat2*15)/50 + (s.fat*40)/100;
    return total;
}

void Display(struct Student student) {
    printf("%s\n", student.name);
    printf("%s\n", student.regno);
    printf("%.1f\n", student.aggregate);
    if (student.aggregate >= 50 && student.fat >= 40) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }
}

int main() {
    struct Student student;

    printf("Enter the name of the student: ");
    scanf("%s", student.name);

    printf("Enter the register number of the student: ");
    scanf("%s", student.regno);

    printf("Enter the marks obtained in DA1: ");
    scanf("%f", &student.da1);

    printf("Enter the marks obtained in DA2: ");
    scanf("%f", &student.da2);

    printf("Enter the marks obtained in Quiz: ");
    scanf("%f", &student.quiz);

    printf("Enter the marks obtained in CAT1: ");
    scanf("%f", &student.cat1);

    printf("Enter the marks obtained in CAT2: ");
    scanf("%f", &student.cat2);

    printf("Enter the marks obtained in FAT: ");
    scanf("%f", &student.fat);

    student.aggregate = Calculate(student);
    Display(student);

    return 0;
}