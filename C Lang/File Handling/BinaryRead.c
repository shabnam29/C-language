// C code to read a file in binary mode
#include <stdio.h>
#include<stdlib.h>
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
    ptr = fopen("Student1.dat", "rb");
    if (ptr == NULL)
    {
        printf("File not exit");
        exit(1);
    }
    while (1)
    {
        ch = fread(&s1, sizeof(s1), 1, ptr);
        printf("Student Id:%d\n", s1.studentID);
        printf("Student name:%s\n", s1.name);
        printf("Student mark:%d\n", s1.mark);
        if(ch==0){
            break;
        }
    }
    fclose(ptr);

    return 0;
}