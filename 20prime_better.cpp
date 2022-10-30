#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout<<"give the number to check whether if it's prime or not\n";
    cin>>n;
    int counter;
    bool flag=0;
    for ( counter=2;counter<=sqrt(n);counter++){
        if (n%counter==0){
            cout<<"non-prime"<<endl;
            flag=1;
            break;
        }
    }if (flag==0){
        cout<<"prime"<<endl;
    }
    
    return 0;
}