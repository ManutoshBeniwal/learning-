#include <iostream>
using namespace std;
int main(){
     int n;
    cout<<"type the no of rows you want for the series\n";
    cin>>n;
    for (int row=1;row<=3;row++){
        for (int col=1;col<=n;col++){
            if ((row+col)%4==0 || (row==2 && col%4==0)){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }cout<<endl;
    }
    return 0;
}