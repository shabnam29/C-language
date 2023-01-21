// Address of structure

#include<stdio.h>
#include<string.h>
#pragma pack(1)  // used to eliminate the extra 2 bytes
struct employee
{
    char name[10];
    int empNo; // 10+4=14 -> total_size
}e1;

int main(){
    e1.empNo = 53460;
    strcpy(e1.name,"Education");
    printf("The size of struct : %u\n",sizeof(e1));
    printf("Employee No: %u\n",&e1.empNo);  
    printf("Employee Name: %u\n",&e1.name); 
    return 0;
}