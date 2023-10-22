#include <stdio.h>
int main(){
    int a = 3;
    float b = 4.5;
    int c;
    // Implicit type casting
    c = a + b;
    printf("Implicit type casting: %d\n", c);

    // explicit type casting
    c = (int)a + b;
    printf(" explicit type casting: % d\n ", c);
}