#include <stdio.h>
int main(){
    int num, num1, num2, num3;
    printf("Enter three digit number : ");
    scanf("%3d",&num);
    num1 = num/100;
    num2 = (num % 100) / 10;
    num3 = num%10;
    printf("after the number is reverse : %d%d%d",num3,num2,num1);
    return 0;
}