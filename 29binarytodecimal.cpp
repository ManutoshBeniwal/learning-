#include <iostream>
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
    }int main(){
        int n;
        cout<<"type binary digit to convert to decimal--";
        cin>>n; 
        cout<<"decimal="<<binarytodecimal(n)<<endl;
        return 0;
    }
