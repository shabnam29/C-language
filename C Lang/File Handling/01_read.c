#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("Example.txt","r");
    char ch;
    // fscanf(FILE *ptr, format specifier ,argument);
    fscanf(ptr,"%c",&ch);
    printf("%c",ch);
    return 0;
}