#include <iostream> //including files for input and output
using namespace std;   //std stands for standard cout belong to namespace standard
int main()       //main indicates the starting point of execution
{
    //cout<<"Hello guys" << endl; //cout for output and cin for input
    //int amount1;
    //cin>>amount1;
   // int amount2;
    //cin>>amount2;
    //int sum;
   //sum=amount1+amount2;
    //cout<<sum<<endl;

    int a;
    cout<<"enter number";
    cin>>a;
    
        if (a%2==0)
        {
            cout<<" even";

        } else {
            cout<<" odd";
    }
    return 0;            //exit code
}