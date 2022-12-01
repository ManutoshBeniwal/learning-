#include <bits/stdc++.h>
using namespace std;
int main(){//if we have array of n elemets than we have to
//n-1 iterations before we get the sorted array.
// and for ith iteraiton -- it'll run till n-i iterations.
int n;cin>>n;int arr[n];
for (int i=0;i<n;i++){cin>>arr[i];}
//since it'll run for n-1 iterations
for (int counter=1;counter<n;counter++){
    for (int i=0;i<n-counter;i++){
        if (arr[i]>arr[i+1]){
            int temp=arr[i];arr[i]=arr[i+1];
            arr[i+1]=temp;
        }else {continue;}}}

for (int i=0;i<n;i++){cout<<arr[i]<<" ";}
    return 0;
}