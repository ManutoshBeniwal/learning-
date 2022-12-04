#include <bits/stdc++.h>
using namespace std;
#include <cmath>
int arrmax(int arr[],int n){
       int mx=-1999999;
       for (int i=0;i<n;i++){
             mx=max(mx,arr[i]);
       }return mx;
}
int main(){
       int n;cin>>n;int arr[n];
       for (int i=0;i<n;i++){cin>>arr[i];}
       cout<<arrmax(arr,n);
return 0;
}