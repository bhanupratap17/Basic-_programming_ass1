#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

   /*  if (num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);

    return 0; */

// bitwise operator
    if (num & 1)
        printf("%d is odd.", num);
    else
        printf("%d is even.", num);

    return 0;
}