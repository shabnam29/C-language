// POINTER ARITHMETIC

#include<stdio.h>
int main(){
    // Integer datatype -> 4 bytes
    int i=23;
    int *j=&i;
    printf("The address of i and value of j %d\n", j);
    j++;
    printf("The address of i and value of j after increment %d\n", j);

    // Char dataype -> 1 bytes
    char ch = 'a';
    char *ptr = &ch;
    printf("The address of ch and value of ptr %d\n", ptr);
    ptr++;
    printf("The address of ch and value of ptr after increment %d\n", ptr);

    // Float datatype -> 4 bytes
    float a= 3.4;
    float *ptr1 = &a;
    printf("The address of a and value of ptr1 %d\n", ptr1);
    ptr1++;
    printf("The address of a and value of ptr1 after increment %d\n", ptr1);
    return 0;
}