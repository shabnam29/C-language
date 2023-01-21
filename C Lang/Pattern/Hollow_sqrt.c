// Hollow Square Star Pattern

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==n||j==n||i==1||j==1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}