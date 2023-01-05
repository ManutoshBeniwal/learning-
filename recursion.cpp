#include <bits/stdc++.h>
using namespace std;
// void fib(int a,int b,int n){
//     int temp;
//     if (n>0){
//         cout<<a<<" ";
//         temp=b;b+=a;a=temp;
//         fib(a,b,n-1);
//     }
// }
int a=0,b=1;
void f(int n){
    if (n>0){cout<<a<<" ";
    int temp=b;
    b+=a;
    a=temp;
    f(n-1);}
    
}
int main (){
    f(10);
    return 0;
}