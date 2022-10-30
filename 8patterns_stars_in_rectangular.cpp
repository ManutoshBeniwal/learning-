#include <iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"gives no of rows and columns"<<endl;
    cin>>row>>col;
    for (int i =1;i<=row;i++){
        for (int t=1;t<=col;t++){
            cout<<'*';
        }cout<<endl;
    }
    return 0;
}