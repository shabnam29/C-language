// CALL BY VALUE
#include<stdio.h>
int sum(int a,int b){
    a = 34; // value will be not change in the main function
    return a+b;

}
int main(){
    int x =10,y=14;
    printf("The value of x+y is %d\n",sum(x,y)); // call by value
    printf("The value of x and y is %d and %d\n",x,y);
    return 0;
}