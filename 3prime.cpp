#include <iostream>
using namespace std;
int main(){
    int number1;
    int number2;
    cout<<"prime numbers from\n";
    cin>>number1;
    cout<<"to";
    cin>>number2;
    int counter2;
    for (int counter=number1;counter<=number2;counter++){
        for ( counter2=2;counter2<counter;counter2++){
            if (counter%counter2==0){
                break;}}
        if (counter==counter2){   //counter2 will take the value equal to counter but will not run the loop as condition for the loop is counter2<counter
                cout<<counter<<endl;  //if is outside of the second for loop and if the loop runs completely then the number is prime else it will break without reaching the 
            }                          //value equal to counter 
    }
    return 0;
}