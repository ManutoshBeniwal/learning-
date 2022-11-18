#include <stdio.h>
int main(){
    int x=8,y=7;
    --x;y++;//x=7,y=8
    int z=--x+y++;
    printf("%d\n",z);//6+8=14
    printf("%d,%d\n",++z,z++);
    printf("%d",z);//16
    return 0;
}