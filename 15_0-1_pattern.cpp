#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"type the value of n "<<endl;
    cin>>n;
    for (int row=1;row<=n;row++){
        for (int col=1;col<=row;col++){
            if ((row+col)%2==0){
                cout<<'1';
            }else{
                cout<<'0';
            }
        }cout<<endl;
    }

    return 0;
}