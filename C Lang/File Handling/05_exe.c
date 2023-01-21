#include<stdio.h>
int main(){
    FILE *ptr;
    char ch;
    ptr = fopen("Text.txt","w");
    printf("Enter the text if want to quit press q : \n");
    while (1)
    {
       scanf("%c",&ch);
    //    fputc(argument,FILE *pointer);
       fputc(ch,ptr);
       if(ch=='q'){
        break;
       }
    }
    fclose(ptr);
    return 0;
}