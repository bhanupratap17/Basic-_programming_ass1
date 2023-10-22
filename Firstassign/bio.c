#include <stdio.h>
int main(){
    char first_name[20], last_name[20];
    int birth_year;
    long int phone_num;

    printf("enter the first name of user: ");
    scanf("%s",&first_name);

    printf("enter the last name of user: ");
    scanf("%s",&last_name);

    printf("enter the birth year of your : ");
    scanf("%d",&birth_year);

    printf("enter the phone number : ");
    scanf("%ld",&phone_num);

    printf("\nBiodata:\n");
    printf("Name: %s %s\n", first_name, last_name);
    printf("Year of birth: %d\n", birth_year);
    printf("Mobile number: %ld\n", phone_num);

    return 0;
}