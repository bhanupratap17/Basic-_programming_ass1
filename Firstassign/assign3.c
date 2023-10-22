#include <stdio.h>

int main()
{
    int num;
    char ch;
    float fnum;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Octal value: %o\n", num);
    printf("Hexadecimal value: %X\n", num);
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("ASCII value of %c: %d\n", ch, ch);
    printf("Enter a float: ");
    scanf("%f", &fnum);
    printf("Float value: %.6f\n", fnum);
    return 0;
}
