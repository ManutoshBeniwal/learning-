#include <iostream>
using namespace std;
int main(){
    int x=8,y=7;
    --x;y++;
    int z=--x+y++;cout<<z<<endl;
    cout<<++z<<","<<z++<<endl;
    cout<<z<<endl;

    return 0;
}