// Pointer arithmetic
// Subtraction and comparison
#include <stdio.h>
int main()
{
    int i = 23;
    int *j = &i;
    int **z = &j; // poniter to pointer
    if (j == &i)  // comparison
    {
        printf("Same address\n");
    }
    printf("i: %d\n" , &i);
    printf("j : %d\n", j);
    printf("%d\n", (j - (&i))); // subtraction
    return 0;
}