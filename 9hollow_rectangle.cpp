#include <iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"give no of rows and columns"<<endl;
    cin>>row>>col;
    for (int i=1;i<=row;i++){
        for (int t=1;t<=col;t++){
            if (i==1 || i==row || t==1 || t==col) {
                cout<<'*';
            }else {
                cout<<' ';
            }
            }cout<<endl;}
    
    return 0;
}