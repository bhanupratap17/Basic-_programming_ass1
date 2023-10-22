#include <stdio.h>
int main(){
    int x = 3, y =4,z= 5,u=6;
    int ans;
    ans = u += y *= z -= x += 5;
    printf("ans : %d",ans);
}