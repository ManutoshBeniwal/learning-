#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"type to get the reverse of it"<<endl;
    cin>>n;
    int reverse_number=0;
    while (n>0){
        int lastdigit= n%10;
        reverse_number=reverse_number*10+lastdigit;
        n=n/10;
    }cout<<reverse_number<<endl;
    return 0;
}