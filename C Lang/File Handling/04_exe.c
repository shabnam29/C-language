#include<stdio.h>
int main(){
    FILE *ptr;
    char ch;
    ptr = fopen("Example.txt","r");
    if(ptr==NULL){
        printf("File does not exit");
    }
    while(ch!=EOF){
        // fgetc(FILE *ptr);
        ch = fgetc(ptr);
        printf("%c",ch);
    }
    fclose(ptr);
    return 0;
}