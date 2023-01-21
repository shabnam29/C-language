// How to scanf and print the structure in C
#include <stdio.h>

struct bookDetails
{
    char bookAuthor[20];
    int bookID;
    int bookNO;
    char bookName[50];
    float amount;
};
int main()
{
    struct bookDetails b1;
    printf("Enter the Book author name : ");
    scanf("%s", &b1.bookAuthor);
    printf("Enter the Book ID : ");
    scanf("%d", &b1.bookID);
    printf("Enter the Book sereal number : ");
    scanf("%d", &b1.bookNO);
    printf("Enter the Book name : ");
    scanf("%s", &b1.bookName);
    printf("Enter the Book amount : ");
    scanf("%f", &b1.amount);

    printf("-------------BOOK DETAILS------------\n");
    printf("Book author name: %s\n", b1.bookAuthor);
    printf("Book ID: %d\n", b1.bookID);
    printf("Book sereal number: %d\n", b1.bookNO);
    printf("Book name: %s\n", b1.bookName);
    printf("Book amount: %f\n", b1.amount);
    return 0;
}