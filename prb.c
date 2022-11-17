#include <stdio.h>
int main(){
    int x=8,y=7;
    --x;y++;
    int z=--x+y++;printf("%d\n",z);
    printf("%d,%d\n",++z,z++);printf("%d",z);
    return 0;
}