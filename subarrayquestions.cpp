#include <bits/stdc++.h>
using namespace std;

void subarr(int arr[],int n){
    int st=0,e=0,sum=0;
while (st<n){
    if (e<n){for(int i=st;i<=e;i++){
        //cout<<arr[i];
        sum+=arr[i];
    }e++;cout<<sum<<endl;sum=0; //sum of the current subarray
    }else {st++;e=st;}}}

int main(){
int n;cin>>n;int arr[n];
for(int i=0;i<n;i++){cin>>arr[i];}
subarr(arr,n);



    return 0;
}