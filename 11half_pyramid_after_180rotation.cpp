#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"type the value of n"<<endl;
    cin>>n;
    for (int row=1;row<=n;row++){
        for (int col=1;col<=n;col++){
            col<=n-row?cout<<"  ":cout<<"* ";
        }cout<<endl;
  
    }
    return 0;
}