#include <iostream>
#include <math.h>
using namespace std;
int hexadecimaltodecimal(int n){
    int power=0,answer=0,lastdigit;
    while (n>0){
        lastdigit=n%10; // to store lastdigit
        answer+=lastdigit*pow(16,power);//lastdigit*16^0+....
        n=n/10;power+=1; //to eliminate lastdigit & ++power
        }return answer;}
        int main(){
            int n;
            cout<<"type a hexa code to convert to decimal--";
            cin>>n;cout<<"decimal="<<hexadecimaltodecimal(n);
            return 0;
        }