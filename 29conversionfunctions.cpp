#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int binarytodecimal(int n){ //function to convert bi to deci
    int power=0,answer=0,lastdigit;
    while (n>0){
        lastdigit=n%10; //lastdigit of n will be stored in it
        answer+=lastdigit*pow(2,power);
        n=n/10;   //to eliminate the last digit of n.
        power+=1; //increasing power by one.
    }return answer; //to return the decimal value 
    } 
int decimaltobinary(int n){
    int quotient=n,answer=0;
    while (quotient>0){
        answer=answer*10+quotient%2;
        quotient/=2;}
        return answer;}
int hexadecimaltodecimal(string n){
    int power=0;int s=n.size();int answer=0;
    for (int index=s-1;index>=0;index--){
        if (n[index]>='0' && n[index]<='9'){
            answer+=(n[index]-'0')*pow(16,power);
        }else if(n[index]>='A' && n[index]<='F'){
            answer+=(n[index]-'A'+10)*pow(16,power);
        }power+=1;}return answer;}   
    

    int main(){\
    /*
        int n;int x;
        cout<<"type binary digit to convert to decimal--";
        cin>>n; 
        cout<<"decimal="<<binarytodecimal(n)<<endl;
        cout<<"type a number to convert into binary--";
        cin>>x;
        cout<<"binary="<<decimaltobinary(x)<<endl;
*/  string n;cout<<"type the value to convert to decimal"<<endl;
    cin>>n;cout<<hexadecimaltodecimal(n)<<endl;
        return 0;
    }
