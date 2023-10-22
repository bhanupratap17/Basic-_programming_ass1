#include <stdio.h>
int main()
{
    float farenheit, celsius;
    printf("Enter the temp in celsius : ");
    scanf("%f", &celsius);

    farenheit = celsius * 9/5 + 32;

    printf("after the changing temp celsius to farenheit : %f", farenheit);
}