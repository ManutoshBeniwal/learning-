#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cout<<"type the number to check for amstrongnumber\n";
    cin>>n;
    int original_number=n;
    int sum=0;
    while (n>0){
        int lastdigit=n%10;
        sum+=round(pow(lastdigit,3));
        n=n/10;
    }
    if (sum==original_number){
        cout<<"amstrong number"<<endl;
    }else{
        cout<<"non-amstrong"<<endl;
    }
    return 0;
}