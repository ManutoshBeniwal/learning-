#include <bits/stdc++.h>
using namespace std;
class car{
    private:
    int a;
    public:
    car();
    ~car();
};
car::car(){
    a=10;
}
car::~car(){
    cout<<"f"<<endl;
}
int main(){
    car c;
    return 0;
}