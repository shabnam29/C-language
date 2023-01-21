// C code to write to a file in binary mode.
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
    ptr = fopen("Student1.dat", "wb+");
    printf("-------------Enter the student details-------------\n\n");
    while (1)
    {
        printf("Enter the student Id:\n");
        scanf("%d", &s1.studentID);
        printf("Enter the student name:\n");
        scanf("%s", &s1.name);
        printf("Enter the student mark:\n");
        scanf("%d", &s1.mark);
        fwrite(&s1,sizeof(s1),1,ptr);
        printf("Do want to add another record Y/N\n");
    fflush(stdin);
    scanf("%c", &ch);
    if (ch == 'N'||ch=='n')
    {
        break;
    }
    }
    fclose(ptr);

    return 0;
}