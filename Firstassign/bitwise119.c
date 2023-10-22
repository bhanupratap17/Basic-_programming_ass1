#include <stdio.h>

int main()
{
    int a = 12, b = 25, c;

    c = a & b;
    printf("a & b = %d\n", c);

    c = a | b;
    printf("a | b = %d\n", c);

    c = a ^ b;
    printf("a ^ b = %d\n", c);

    c = ~a;
    printf("~a = %d\n", c);

    c = a << 2;
    printf("a << 2 = %d\n", c);

    c = b >> 2;
    printf("b >> 2 = %d\n", c);

    return 0;
}
