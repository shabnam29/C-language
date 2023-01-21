// ARRAYS
#include<stdio.h>
int main(){
    int mark[10];
     for(int i=0;i<10;i++){
        printf("Enter the number : ");
        scanf("%d",&mark[i]);
    }
      for(int i=0;i<10;i++){
        printf("The mark[%d] is %d\n",i,mark[i]);
    }
    return 0;
}