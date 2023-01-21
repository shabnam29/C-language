// Pointer arithmetic
// Addition and subtraction of pointer
#include <stdio.h>
int main()
{
    int i = 8;
    int *ptr = &i;
    printf("The value of ptr %d\n", ptr);
    ptr++;
    printf("The value of ptr after increment %d\n", ptr);
    ptr = ptr - 2;
    printf("The value of ptr after decrement %d\n", ptr);
    return 0;
}