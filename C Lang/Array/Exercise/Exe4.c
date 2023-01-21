// C program to reverse an array using pointers
#include<stdio.h>
void reverse(int *n,int size){
    for(int i=0;i<size/2;i++){
        int temp = *n;
        *n=*n++;
        *n++=temp;
    }
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d",n[i]);
    // }
}
int main(){
    int n[]={1,2,3,4,5};
    int size=5;
    reverse(n,size);
    for (int i = 0; i < size; i++)
    {
        printf("%d",n[i]);
    }
    return 0;
}