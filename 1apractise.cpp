#include <bits/stdc++.h>
using namespace std;
#include <cmath>
int reverse_no(int n){
    int lastdigit,ans;
        while (n>0){lastdigit=n%10;n/=10;
        ans=ans*10+lastdigit;}return ans;}
int binarytodecimal(int n){
    int lastdigit,ans=0,power=1;
    while (n>0){lastdigit=n%10;ans+=lastdigit*power;
    power*=2;n/=10;}return ans;}
int decimaltobinary(int n){
    int ans=0,quotient=n;
    while (quotient>0){ans=(ans*10)+(quotient%2);
    quotient/=2;}
    return reverse_no(ans);}   
string decimaltohexadecimal(int n){
    string ans="";int base=1;
    while (base<=n){base*=16;}base/=16;
    while (n>0){int quotient=n/base;n-=quotient*base;
    base/=16;if (quotient<=9){ans+=to_string(quotient);}
    else{char c='A'+ quotient-10;ans.push_back(c);}}
    return ans;}
int hexadecimaltodecimal(string n){int s=n.size(),base=1,ans;
    for (int index=s-1;index>=0;index--){
        if (n[index]<='9'){ans+=(n[index]-'0')*base;}
        else if (n[index]>='A' && n[index]<='F'){
            ans+=(n[index]-'A'+10)*base;
        }base*=16;
    }return ans;}

    
int main(){
    string n;cin>>n;
    cout<<hexadecimaltodecimal(n)<<endl;
return 0;
}