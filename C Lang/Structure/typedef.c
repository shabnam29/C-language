// typedef keyword in C

#include<stdio.h>
#include<string.h>
typedef struct student {
    int student_ID;
    char name[20];
    int roll_NO;
    char address[50];
}student1;

int main(){
    // struct student s1;
    student1 t1;
    t1.student_ID = 178923;
    strcpy(t1.name,"RsEducation");
    t1.roll_NO = 2345;
    strcpy(t1.address,"12 new street");
    printf("----------The student details are -----------\n");
    printf("student name : %s\n",t1.name);
    printf("student ID : %d\n",t1.student_ID);
    printf("student Roll nomber : %d\n",t1.roll_NO);
    printf("student Address : %s\n",t1.address);
    
    return 0;
}