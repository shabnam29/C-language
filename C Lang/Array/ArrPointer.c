// ARRAY AND POINTERS
#include<stdio.h>
int main(){
    int mark[3]={1,2,3};
    int *ptr = mark;
    *ptr = 23;
    ptr++;
    *ptr = 65;
    ptr++;
    *ptr = 82;
    for(int i=0;i<3;i++){
        printf("The mark[%d] is %d\n",i,mark[i]);
    }
    return 0;
}