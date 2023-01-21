// Pointers
#include<stdio.h>
int main(){
    int i=5;
    int *j = &i;
    printf("The value of i %d\n",i);
    printf("The address of i %d\n",&i);
    printf("The value of j is %d\n",j);
    printf("The address of j is %d\n",&j);
    printf("The value of i %d\n",*(&i));
    return 0;
}