// CALL BY REFERENCE
#include<stdio.h>
int sum(int *x,int *y){
    *x = 10;
    return *x+*y;
}
int main(){
    int x=12,y=3;
    printf("The value of x and y %d\n",sum(&x,&y));
    printf("The value of x and y is %d and %d\n",x,y);
    return 0;
}