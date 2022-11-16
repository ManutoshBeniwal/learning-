#include <bits/stdc++.h>
using namespace std;
#include <cmath>
string decimaltohexadecimal(int n){
    string ans="";int base=1;int quotient;
    while (base<=n){base*=16;}base/=16; 
    while (base>0){quotient=n/base;n-=base*quotient;
    base/=16;if (quotient<=9){ans+=to_string(quotient);}
    else{char c='A'+quotient-10;ans.push_back(c);}}return ans;}
int main(){
int n;cout<<"type a decimal number to convert it to hexadecimal"<<endl;
cin>>n;cout<<decimaltohexadecimal(n)<<endl;
return 0;
}