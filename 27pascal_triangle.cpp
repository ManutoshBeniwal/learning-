#include <iostream>
using namespace std;
int fac(int n){
    int result=1;
    for (;n>=1;n--){
        result*=n;}return result;}
int bi(int n,int r){
    int result=fac(n)/(fac(n-r)*fac(r));return result;}

int main(){
    int n;cout<<"type a value of n for the pattern\n";cin>>n;
    for (int row=1;row<=n;row++){
        for (int col=1;col<=row;col++){
            cout<<bi((row-1),(col-1));
        }cout<<endl;}
    return 0;
}