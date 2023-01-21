// Structure using functiom
#include<stdio.h>
#include<string.h>
struct Bankdetail{
    int bankID;
    char bankName[20];
};
void print(struct Bankdetail b1){
    b1.bankID = 1234;
    strcpy(b1.bankName,"State Bank");
    printf("Bank Id : %d\n",b1.bankID);
    printf("Bank Name : %s\n",b1.bankName);
}
int main(){
    struct Bankdetail b1;
    print(b1);
    return 0;
}