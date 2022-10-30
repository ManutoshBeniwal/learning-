//inverted half pyramid
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"give the value of n for a inverted half pyramid\n";
    cin>>n;
    for (n;n>=1;n--){
        for (int i=1;i<=n;i++){
            cout<<'*';
        }cout<<endl;
    }



    return 0;
}