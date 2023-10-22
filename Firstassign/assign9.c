#include <stdio.h>
#include <conio.h>

int main()
{
    char ch1, ch2;
    printf("Enter a character: ");
    ch1 = getch();
    printf("\nThe character you entered is: %c\n", ch1);
    printf("Enter another character: ");
    ch2 = getche();
    printf("\nThe character you entered is: %c\n", ch2);
    return 0;
}
