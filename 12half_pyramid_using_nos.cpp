#include <iostream>
using namespace std;
int main(){
     int row;
     cout<<"type row no for the pattern"<<endl;
     cin>>row;
     for (int i=1;i<=row;i++){   //rows 1 to n and columns 1 to row no.
        for(int j=1;j<=i;j++){
            cout<<i;
        }cout<<endl;
     }
    return 0;
}