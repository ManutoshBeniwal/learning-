#include <bits/stdc++.h>
using namespace std;
void fib(int a,int b,int n){
    int temp;
    if (n>0){
        cout<<a<<" ";
        temp=b;b+=a;a=temp;
        fib(a,b,n-1);
    }
}
int main (){
    fib(0,1,10);
    return 0;
}