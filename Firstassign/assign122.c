#include <stdio.h>
int main(){
    int radius;
    float pi = 3.14, area_of_circle;
    printf("Enter the radius of circle : ");
    scanf("%d",&radius);
    area_of_circle = pi * radius*radius;
    printf("the area of circle is : %f\n",area_of_circle);
    return 0;
}