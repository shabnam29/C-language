#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("Example.txt","w");
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    // fprintf(FILE *ptr,format specifier,argument);
    fprintf(ptr,"%c",ch);
    fclose(ptr); // it close file
    return 0;
}