#include<stdio.h>
int mian()
{
    int arr[100]={0};
    int i,x,pos,n=10;
    for(i=0;i<10;i++)
    arr[i]=i=1;
    for(i=0;i<n;i++)
    printf("%d",arr[i];)
    printf("\n");
    x=50;
    pos=5;
    n++;
    for(i=n-1;i>=pos; i--)
    arr[pos-1]=x;
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
    printf("\n");
    return 0;
}