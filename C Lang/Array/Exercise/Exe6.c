// print the address of the 3D array using C
#include<stdio.h>
int main(){
    int n[2][3][4];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<4;k++){
                printf("The address of n[%d][%d][%d] : %u\n",i,j,k &n[i][j][k]);
            }
            // printf("\n");
        }
    }
    return 0;
}