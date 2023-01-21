// C program to search elements in array using pointers
#include<stdio.h>
int search(int *n,int key,int size){
    for(int i=0;i<size;i++){
        if(*n==key){
            return 1;
        }
        *n++;
    }
    return -1;
}
int main(){
    int n[]={12,15,17,18,30,45};
    int key = 45;
    int index = search(n,key,6);
    if(index==1){
        printf("Key is found");
    }
    else{
        printf("Key is not found");
    }

    return 0;
}