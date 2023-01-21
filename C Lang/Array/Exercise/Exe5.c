// C program to print multiplication(Table) of an number.
#include <stdio.h>
void table(int *n, int num, int size)
{
    printf("-------> Table Printng Multiplication is %d <-------\n", num);

    for (int i = 0; i < size; i++)
    {
        n[i] = num * (i + 1);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d X %d = %d\n", num, i + 1, n[i]);
    }
    printf("---------End of table----------\n\n");
}
int main()
{
    int size;
    printf("Enter the size of the table : ");
    scanf("%d", &size);
    // printf("Enter how many table you want to print : ");
    // scanf("%d", &row);
    int n[size];
    table(n, 2, size);
    table(n, 12, size);

    return 0;
}