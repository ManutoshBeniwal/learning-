#include <stdio.h>
#include <stdlib.h>
int main(){

    int * p;
    p=(int *)malloc(4);  //malloc only returns void type pointer so we have to typecast the type of pointer hence (int *) and returns base 
    //address of the memory allocated.

    printf("%u\n",p);
    *p=256;
    printf("%d",*p);
    free(p);   //it frees up the space used in heap for memory allocation.

    return 0;
}