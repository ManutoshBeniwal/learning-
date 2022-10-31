#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for (int row=1;row<=n;row++){
        for (int star=1;star<=row;star++){
            cout<<"* ";
        }for (int space=1;space<=(2*n-2*row);space++){
            cout<<"  ";
        }
    }
    
    return 0;
}