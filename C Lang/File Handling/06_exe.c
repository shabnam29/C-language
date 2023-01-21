/* Write C program to write and read the following quote to a file
with the help of fgetc() and fputc() function
            Everybody should learn to program a
            computer, because it teaches you how
                        to think
                                        -Steve jobs
*/

#include <stdio.h>
void write(FILE *ptr)
{
    char ch;
    ptr = fopen("Quote.txt", "w");
    printf("Enter your text : \n");
    printf("------Enter q for Quit--------\n");
    while (1)
    {
        scanf("%c", &ch);
        fputc(ch, ptr);
        if (ch == 'q')
        {
            break;
        }
    }
    fclose(ptr);
    printf("\n");
}
void read(FILE *ptr)
{
    char ch;
    ptr = fopen("Quote.txt", "r");
    printf("The content of file are : \n\n");
    while (ch != EOF)
    {
        ch = fgetc(ptr);
        printf("%c", ch);
    }
    fclose(ptr);
}
int main()
{
    FILE *ptr;
    write(ptr);
    read(ptr);
    return 0;
}