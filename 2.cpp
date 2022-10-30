#include<iostream>
using namespace std;
int main()
{
    int variable;
    cout<<"enter the number and it will get printed if it is positive\n";
    cin>>variable;
    while(variable>0){
        cout<<variable;
        cin>>variable;
    }
    return 0;
}
