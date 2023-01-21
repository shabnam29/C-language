// Acessing array using function
#include <stdio.h>
void print_Array(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        *ptr = 45;
        // printf("%d ", ptr[i]);
        // printf("The value of the n[%d] is %d\n", i, *ptr++);
        printf("The value of the n[%d] is %d\n", i, *ptr++);
    }
    printf("\n");
}
void print_arr(int n[], int size)
{
    for (int i = 0; i < size; i++)
    {
        n[0] = 15;
        printf("%d ", n[i]);
    }
    printf("\n");
}
int main()
{
    int n[] = {1, 2, 3, 4};
    printf("The value of n[0] : %d\n", n[0]);
    // print_arr(n,4);
    print_Array(n, 4);
    printf("The value of n[0] : %d\n", n[0]);

    // printing array
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", n[i]);
    }
    return 0;
}