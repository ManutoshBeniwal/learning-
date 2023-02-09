#include <bits/stdc++.h>
using namespace std;
#include <cmath>
/* subarray - any continous part of an array
but only in forward direction i.e value of i always increase
number of subarrays of an array with n elements 
=nC2+n=n*(n+1)/2
Subsequence -  it is a sequence that can be derived 
an array by selecting zero or more elements, without changing
the order of the remaining elements
number of subsequences of an array with n elements=2^n.
***
every subarray is a subsequence but every subsequence is not a 
subarray.
***
*/
int arrmax(int arr[],int n){int mx=-1999999;
       for (int i=0;i<n;i++){mx=max(mx,arr[i]);}return mx;}

int sum_of_subarray(int arr[],int n){int sum=0;
    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            sum+=arr[j];
            cout<<sum<<endl;}}return 0;}
/*
kickstart question
Sarasvati has an array of N non-negative integers.the i-th 
integer of the array is A. She wants to choose a contiguous 
arithmetic subarray from her array that has the maximum 
length . please help her to determine the length of the 
longest contiguous arithmetic subarray.
contiguous - next or together in sequence.
*/
int lolsubarray(int arr[],int n){//1 2 3 4 8 ans = 4
       int d1=arr[1]-arr[0];
       int counter=2;
       int ans=2;
       for (int i=2;i<n;i++){
              if (d1==(arr[i]-arr[i-1])){
                     counter++;
              }else {d1=arr[i]-arr[i-1];
              ans=max(counter,ans);counter=2;}} ans=max(counter,ans);return ans;}
/*kickstart question - record breaker
isyana is given the number of visitors at her local theme
park on N consecutive days.A day is record breaking if it 
satisfies both of the following conditons
the number of visitors on the day is strictly larger than
the number of visitors on each of the previous days.
either it is the last day, or the number of visitors on the 
day is strictly larger than the number of visitors on the 
following day 
note that the very first day could be a record breaking day!
help isyana to find out the number of record breaking days.
*/  
int no_of_rb_days(int arr[],int n){
       int mx=-1;
       int ans=1;
       for (int i=0;i<n;i++){
            if (arr[i]>mx && arr[i]>arr[i+1]){
              ans++;}  
       mx=max(mx,arr[i]);}return ans;}
/*
given an array of size N. the task is to find the first 
repeating element in the array of integers,i.e,an element 
that occurs more than once and whose index of the first 
occurrence is smallest. 1<=N<=10^6
*/ 
int frei(int arr[],int n){//7
//1 5 3 4 3 5 6
       const int N=1e5+2; //10^5 but 10^6 not working 
       int idx[N];int minidx=INT_MAX;
       for (int i=0;i<N;i++){idx[i]=-1;}
       for (int i=0;i<n;i++){
              if (idx[arr[i]]!=-1){
                     minidx=min(idx[arr[i]],minidx);
              }else {idx[arr[i]]=i;}
       }if (minidx==INT_MAX){return -1;}
       else {return minidx;}}

/*given an array A of size N of non-negative integers,find
a continuous subarray which adds to a given number S. 
constraints :
1<=N<=10^5
=<=Ai<=10^10

there will be two methods -
using nested loops but it will increase the time complexity 
method two is using two pointer approach by taking a pointer
st and end .
*/

void rsm(int arr[],int n,int s){
       int st=0,e=0,csum=0;
       while ( st,e<n && csum!=s){
              if (csum<s){
                     csum+=arr[e];
                     e++;
              }else if (csum>s){
                     csum-=arr[st];
                     st++;
              }
       }if (csum==s){cout<< st+1<<" "<<e;}
       else {cout <<"error"<<endl;}
}

/*you are given an array of arr[] of N integers including 0
the task is to find the smallest positive number missing 
from the array.

1<=N<=10^6
-10^6<=Ai<=10^6



*/

int main(){
        int n;cout<<"input size of arr, arr, sum req\n";
        cin>>n;int arr[n];

       for (int i=0;i<n;i++){cin>>arr[i];}
       // //sum_of_subarray(arr,n);
       // // cout<<lolsubarray(arr,n);
       // cout<<no_of_rb_days(arr,n)<<endl;
       // cout<<frei(arr,n)<<endl;
       int s;cin>>s;
       rsm(arr,n,s);
return 0;
}
//let me fuck you please baby
