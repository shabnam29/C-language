// SWAP PROGRAM USING CALL BY REFERENCE(POINTER)
#include<stdio.h>
int swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a =5,b =10;
    printf("Before swap a = %d and b = %d\n",a,b);
    swap(&a,&b);
    printf("After swap a = %d and b = %d\n",a,b);
    return 0;
}