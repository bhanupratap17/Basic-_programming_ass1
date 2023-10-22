#include <stdio.h>

int main()
{
    int integerVariable;
    float floatVariable;
    double doubleVariable;
    char charVariable;
    const int constVariable = 10;

    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of char: %zu byte\n", sizeof(char));
    printf("Size of integerVariable: %zu bytes\n", sizeof(integerVariable));
    printf("Size of floatVariable: %zu bytes\n", sizeof(floatVariable));
    printf("Size of doubleVariable: %zu bytes\n", sizeof(doubleVariable));
    printf("Size of charVariable: %zu byte\n", sizeof(charVariable));
    printf("Size of constVariable: %zu bytes\n", sizeof(constVariable));

    return 0;
}
