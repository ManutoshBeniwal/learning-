#include <iostream>
#include <cmath>
using namespace std;
void prime(int start, int end){
    int condition;
    for (int i=start;i<=end;i++){
        if (i==0||i==1)
            continue;
            condition=1;
        for (int j=2;j<=i/2;++j){
            if (i%j==0){
                condition=0;
                break;}}if (condition==1){
                cout<<i<<"  ";}}return;}
int main(){
    int a,b;
    cin>>a>>b;
    prime(a,b);
    return 0;
}