#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"type the value of n"<<endl;
    cin>>n;
    for (int row=1; row<=n;row++){
        for(int col=1;col<=n;col++){
            if (col<=n-row){           //to determine the no of spaces in a row 
                cout<<' ';
            }else {
                cout<<'*';
            }
        }cout<<endl;
    }
  
    
    return 0;
}