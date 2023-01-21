// How to read data from the file
#include<stdio.h>
struct studentDetails
{
    int studentID;
    char name[10];
    int mark;
} s1;
int main(){
    FILE *ptr;
    char ch;
    ptr = fopen("Example.dat","r");
    if(ptr==NULL){
        printf("You cannot open the file");
        exit(1);
    }
    while(1){
        // ch = fgetc(ptr);
        fscanf(ptr,"%d %s %d",&s1.studentID,&s1.name,&s1.mark);
        printf("Student Id:%d\n",s1.studentID);
        printf("Student name:%s\n",s1.name);
        printf("Student mark:%d\n",s1.mark);
        if(fscanf(ptr,"%d %s %d",&s1.studentID,&s1.name,&s1.mark)==EOF){
            break;
        }
    }
    fclose(ptr);
    return 0;
}