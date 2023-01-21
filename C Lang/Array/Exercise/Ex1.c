// C program to add two numbers using pointers
#include<stdio.h>
int add(int *ptr1 , int *ptr2){
    return *ptr1+*ptr1;
}
int main(){
    int a = 10 , b = 10;
    // int *ptr1 = &a,*ptr2=&b;
    printf("%d",add(&a,&b));
     return 0;
}