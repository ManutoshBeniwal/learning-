#include <iostream>
using namespace std;
int main(){
    
    int input;
    cout<<"type a number to check its divisibility with 2 and 3"<<endl;
    cin>>input;
    if (input%2==0 && input%3==0){
        cout<<"both"<<endl;
    }else if (input%2==0 || input%3==0) {
        cout<<"one of them"<<endl;
    }else {
        cout<<!true<<"\nnone of them"<<endl;
    }
        
    return 0;
}