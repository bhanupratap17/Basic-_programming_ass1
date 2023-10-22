#include <stdio.h>
int main(){
    int e,z ,f, x = 5, y = 6;
     z = ++x;
    printf("z : %d\n",z);
     f = x++;
    printf("f : %d\n", f);
   
   e = x++;
   printf("e : %d\n", e);
   printf("x: %d", x);
   z = x++ + ++x;
   printf("z : %d", z);
}