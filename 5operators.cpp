#include <iostream>
using namespace std;
int main(){
    int a =5;
    int b =5;
    int k=a!=b;
    if (k==0){
        cout<<"false"<<endl;//++ incrementor, --decrementor
    }                    //can be of two types post and pre
    if (k==1){
        cout<<"true"<<endl;
    }
    return 0;
}
//in pre (++a,--a) first value is incremented or decremented then 
// get stored in a 

//logical operators - used to connect multiple conditons/expressions together or to reverse logical values
// &&- (AND)gives true if both operands are true, else false
// ||- (OR)gives true if at least one of the operands are true
// ! -  (NOT)gives the opposite of the logical value of the operand. true becomes false and false becomes true 