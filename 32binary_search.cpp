#include <bits/stdc++.h>
using namespace std;
int linear_search(int arr[],int n ,int key){
    //time complexity of linear search is n;
    for (int i=0;i<n;i++){if (key==arr[i]){return i;}}
    return -1;}
int binary_search(int arr[],int n,int key){
    //for binary search the array must be sorted first 
    //time complexity of binary search is "log base2(n)+1"
    int s=0,e=n;
    while (s<=e){int mid=(s+e)/2;
    if (key>arr[mid]){s=mid+1;}
    else if(key<arr[mid]){e=mid-1;}
    else {return mid;}}
    return -1;}


int main (){
    int n;cin>>n;int arr[n];
    for (int i=0;i<n;i++){cin>>arr[i];}
    for (int i=0;i<n;i++){cout<<arr[i]<<" ";}
    int key;cout<<"\ntype a key to find in the array\n";
    cin>>key;
    cout<<linear_search(arr,n,key)<<endl;
    cout<<binary_search(arr,n,key)<<endl;
    return 0;
}