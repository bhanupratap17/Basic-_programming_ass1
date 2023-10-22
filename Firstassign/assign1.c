#include <stdio.h>
#include <conio.h>
int main(){
    int a,b,c,d;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    printf("Enter the value of c : ");
    scanf("%d", &c);
    d = a + b * c % b + 4 * b - c + a * b;

    printf("print the result of d is %d",d);
    return 0;
}
