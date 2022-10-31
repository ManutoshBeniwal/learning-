//bitwise operators
//& -AND gives true only if both value is true
//| -OR  gives true when at least one of the conditon is true
//^ -XOR gives false when both values are same
//~ -ones complement gives the opposite of the given values
//<< -(a<<n)=a*2^n
//>> -(a>>n)=a/2^n
// assignment operators
//a+-=b is also a=a+-b same with *+ and /=
//miscellaneous operators
//sizeof()- returns the size of variable
//ternary operator- condition?x:y returns value of X if condition is true or else value of Y ****




//cast - convert one datatype to another 
//comma(,)- asigns the last value from a list
//& - reference operator returns address of the variable in the memory
//* - pointer operator gives a pointer where a varible is stored in the memory
//bodmas rule of operators is in operators precedence table lec 9
#include <iostream>
using namespace std;
int main(){
    int a=5;
    int b=6;
    int c=a>b?a-b:b-a; //ternary operator
    cout<<c<<endl;
    char ch='a';
    cout<<int(ch)<<endl; // (cast)will print the asci value of a 
    int d=(1,2,3); // comma assign d=3
    cout<<d<<endl;
    int e;
    cout<<&(a)<<endl;//returns the address of a variable
    return 0;
}
