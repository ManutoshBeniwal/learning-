#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"type the no of rows you want for the series\n";
    cin>>n;
    for (int row=1;row<=n;row++){
        for (int space=1;space<=(n-row);space++){
            cout<<"  ";
        }for (int col1=row;col1>=1;col1--){
            cout<<col1<<' ';
        }for (int col2=2;col2<=row;col2++){
            cout<<col2<<' ';
        }cout<<endl;
    }
    return 0;
}

//alternate program for doing the same stuff.
 int n;
    cout<<"type the value of no of rows for the palindromic pattern"<<endl;
    cin>>n;
    for (int row=1;row<=n;row++){
        int index;
        int num=row;
        for (index=1;index<=(n-row);index++){
            cout<<"  ";
        }for (;index<=n;index++){
            
            cout<<num--<<' ';
        }
        num=2;
        for (;index<=(n+row-1);index++){
            cout<<num++<<' ';
        }cout<<endl;