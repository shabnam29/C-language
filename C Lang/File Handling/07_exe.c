// Student record using C

#include <stdio.h>
struct studentDetails
{
    int studentID;
    char name[10];
    int mark;
} s1;
int main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("Example.dat", "w");
    printf("-------------Enter the student details-------------\n\n");
    while(1){
    printf("Enter the student Id:\n");
    scanf("%d", &s1.studentID);
    printf("Enter the student name:\n");
    scanf("%s", &s1.name);
    printf("Enter the student mark:\n");
    scanf("%d", &s1.mark);
    fprintf(ptr, "%d %s %d", s1.studentID, s1.name, s1.mark);
    printf("Do want to add another record Y/N\n");
    fflush(stdin);
    scanf("%c", &ch);
    if (ch == 'N'||ch=='n')
    {
        break;
    }
    }
    return 0;
}