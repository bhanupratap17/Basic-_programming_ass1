#include <stdio.h>
#include <conio.h>
int main()
{
 int a,b,c,d,e;
 printf("Enter the value of a and b : ");
 scanf("%d%d",&a,&b);
 c = a-b;
 d = a*b;
 e = a/b;
 printf("subtraction of %d and %d is : %d\n",a, b, c);
 printf("Multiplication of %d and %d is : %d\n", a, b, d);
 printf("Multiplication of %d and %d is : %d\n", a, b, e);
}