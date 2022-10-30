#include <iostream>
using namespace std;
int main(){
    float a,b;
    char op;
    cout<<"number1(can take decimal values)\n";
    cin>>a;
    cout<<"operator\n";
    cin>>op;
    cout<<"number2(can take decimal values)\n";
    cin>>b;
    cout<<"result=";
    switch (op)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;
    default:
        cout<<"operators- +,-,/,*"<<endl;
        break;
    }

    return 0;
}