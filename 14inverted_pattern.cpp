#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"value of n"<<endl;
    cin>>n;
    for (int row=n;row>=1;row--){
       for (int col=1;col<=n;col++){
            if (col<=row){
                cout<<col<<' ';
           }     
        }cout<<endl;
    }
   return 0;
} //both programs do the same thing.
int main() {
    int z;
    cin>>z;
    for (int i=1;i<=z;i++){
        for (int j=1;j<=z+1-i;j++){
            cout<<j<<' ';
        }cout<<endl;
    }
    return 0;
}