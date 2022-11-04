#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"the value of n for the star pattern\n";
    cin>>n;
    int row;
    for (row=1;row<=n;row++){
        for (int space=1;space<=(n-row);space++){
            cout<<"  ";
        }for (int star=1;star<=(2*row-1);star++){
            cout<<"* ";
        }cout<<endl;
    }
    for (row=n;row>=1;row--){
        for (int space=1;space<=(n-row);space++){ 
            cout<<"  ";
//any odd number can be represented in form of 2*row+-1
        }for (int star=1;star<=(2*row-1);star++){
            cout<<"* ";
        }cout<<endl;
    }
    return 0;
}