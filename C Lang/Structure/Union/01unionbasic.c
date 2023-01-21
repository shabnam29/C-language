// Union declaration
#include<stdio.h>
#include<string.h>
#pragma pack(1)
union Exam{
    int exam_date;
    char exam_Name[10];
    int examID;
};
int main(){

    union Exam e1;
    printf("Size of union %u bytes\n",sizeof(e1));
    e1.exam_date = 12;
    printf("Exam date: %d\n",e1.exam_date);
    strcpy(e1.exam_Name,"RS exam");
    printf("Exam Name: %s\n",e1.exam_Name);
    e1.examID = 10987;
    printf("Exam ID: %d\n",e1.examID);
    return 0;
}




