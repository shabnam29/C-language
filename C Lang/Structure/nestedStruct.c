// Nested Structure In C Language
#include<stdio.h>
#include<string.h>
struct employee
{
    char name[10];
    int empNo;
};
struct staff{
    int salary;
    struct employee e1;   
}s1;

int main(){
    s1.e1.empNo = 53460;
    strcpy(s1.e1.name,"Education");
    s1.salary = 12000;
    printf("Employee No: %d\n",s1.e1.empNo);  
    printf("Employee Name: %s\n",s1.e1.name);
    printf("Employee Salary: %d\n",s1.salary);  
    return 0;
}