#include <iostream>
#include <math.h>
using namespace std;
int decimaltobinary(int n){
    int quotient=n,answer=0;
    while (quotient>0){
        answer=answer*10+quotient%2;
        quotient/=2;}
        return answer;}
        int main(){
            int n;
            cout<<"type a number to convert into binary--";
            cin>>n;
            cout<<"binary="<<decimaltobinary(n)<<endl;
            return 0;
        }