#include <stdio.h>
int main(){
    float farenheit, celsius;
    printf("Enter the temp in farenheit : ");
    scanf("%f",&farenheit);
     
     celsius = (farenheit - 32)*5/9;

     printf("after the changing temp farenheit to celsius : %.2f",celsius);
}