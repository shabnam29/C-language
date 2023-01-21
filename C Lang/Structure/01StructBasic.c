// How declare the structure in C
#include<stdio.h>
#include<string.h>
struct student {
    int student_ID;
    char name[20];
    int roll_NO;
    char address[50];
};

int main(){
    struct student s1;
    s1.student_ID = 178923;
    strcpy(s1.name,"RsEducation");
    s1.roll_NO = 2345;
    strcpy(s1.address,"12 new street");
    printf("----------The student details are -----------\n");
    printf("student name : %s\n",s1.name);
    printf("student ID : %d\n",s1.student_ID);
    printf("student Roll nomber : %d\n",s1.roll_NO);
    printf("student Address : %s\n",s1.address);
    
    return 0;
}