#include <iostream>
using namespace std;
void print(int num){
    cout<<num<<endl;}
int add(int a,int b){
    return a+b;
}

int main(){
    int a =1;
    int b=2;
    print(a);
    print (add(a,b));

    return 0;
}