#include <iostream>
using namespace std;
int factorial(int n){
    int result=1;
    for (;n>=1;n--){
        result*=n;}return result;}

int main(){
    int n,r,answer;
    cout<<"type n and r respectively for binary cofficient\n";
    cin>>n>>r;
    answer=factorial(n)/(factorial(r)*factorial(n-r));
    cout<<answer<<endl;
    return 0;
}