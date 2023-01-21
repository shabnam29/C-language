// Array of Structure
#include <stdio.h>

struct student
{
    int student_ID;
    char name[20];
    int roll_NO;
    char address[50];
};
int main()
{
    struct student classA[5];
    printf("------Enter the student details of class A--------\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the student name[%d] in Class A :", i + 1);
        scanf("%s", &classA[i].name);
        printf("Enter the student ID[%d] in Class A :", i + 1);
        scanf("%d", &classA[i].student_ID);
        printf("Enter the student rollNo[%d] in Class A :", i + 1);
        scanf("%d", &classA[i].roll_NO);
        printf("Enter the student address[%d] in Class A :", i + 1);
        scanf("%s", &classA[i].address);
        fflush(stdin);
    }
    // printf("\n");
    
    
    // puts(classA[1].name);
 printf("--------The student details of class A--------\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Student name[%d] : %s\n", i + 1, classA[i].name);
        printf("Student ID[%d] : %d\n", i + 1, classA[i].student_ID);
        printf("Student rollNO[%d] : %d\n", i + 1, classA[i].roll_NO);
        printf("Student address[%d] : %s\n", i + 1, classA[i].address);
    }

    return 0;
}