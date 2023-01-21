// C program to copy one array to another using pointers
#include <stdio.h>
void copy(int *ptr, int *n, int size)
{
    *n = *ptr;
    for (int i = 0; i < size; i++)
    {
        // *ptr++ == *n++;
        *n++ = *ptr++;
        // printf("n[%d] : %d " , i , *n++ );
    }
    // -- print n ----
    // for(int j=0;j<4;j++){
    //     printf("n[%d] : %d " , j , *n++ );
    // }
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    int n[4];
    copy(arr, n, 4);
    // print n
    for (int j = 0; j < 4; j++)
    {
        printf("n[%d] : %d ", j, n[j]);
    }
    return 0;
}