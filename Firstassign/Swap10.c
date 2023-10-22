#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a and b : ");
    scanf("%d%d",&a,&b);
    printf("\nBefore swap the value of a : %d and b : %d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("After swap the value of a : %d and b : %d", a, b);
    return 0;
}