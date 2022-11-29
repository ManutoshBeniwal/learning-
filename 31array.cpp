#include <bits/stdc++.h>
using namespace std;

//array is a list of hommo elements.each elements of an array
//stores 4 bytes lets say there is an array of 4 elements 
//then the memory it takes is 16 bytes for integer types 
//elements. 
int main(){
    int n;cin>>n;
    int arr[n];
    
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }int key,flag=0;
    /*searching in array --this is linear search*/
cout<<"\ntype a key to find in array and it will return its index"<<endl;
cin>>key;
for (int i=0;i<n;i++){
    if(key==arr[i]){cout<<i<<endl;flag=1;}
}if(flag==0){cout<<"key does not exist in the array\n";}
    return 0;
}
