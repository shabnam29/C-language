#include <stdio.h>
void get(FILE *ptr)
{
    ptr = fopen("Example.txt", "r");
    char ch = fgetc(ptr);
    printf("%c", ch);
    fclose(ptr);
}

int main()
{
    FILE *ptr;
    get(ptr);

    return 0;
}