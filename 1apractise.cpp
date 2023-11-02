#include <bits/stdc++.h>
using namespace std;
#include <cmath>


struct employee {
    char name[30];
    int age;
    float height;
    char gender;
};

void input(employee * e){
    cout<<"Name of the employee"<<endl;
    cin>>e->name;
    cout<<"age of the employee"<<endl;
    cin>>(*e).age;
    cout<<"height of the employee"<<endl;
    cin>>e->height;
    cout<<"gender of the employee"<<endl;
    cin>>(*e).gender;

}




void op(employee * e){
    cout<<"Name   : "<<e->name<<endl;
    cout<<"age    : "<<(*e).age<<endl;
    cout<<"height : "<<e->height<<endl;
    cout<<"gender : "<<e->gender<<endl;
}

int main(){

employee e[3];
for(int i=0;i<3;i++){
input(&e[i]);}

for (int i=0;i<3;i++){
    op(&e[i]);
}

return 0;
}