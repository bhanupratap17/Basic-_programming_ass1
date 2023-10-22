#include <stdio.h>
int main(){
    float principal, rate, time, simple_interest, final_amount;

    printf("Enter the principal amount : ");
    scanf("%f",&principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time period: ");
    scanf("%f", &time);

    simple_interest = (principal*rate*time)/100;
    final_amount = principal + simple_interest;

    printf("The simple interest is: %f\n", simple_interest);
    printf("The final amount is: %f\n", final_amount);
}