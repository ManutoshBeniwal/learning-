#include <bits/stdc++.h>
using namespace std;
#include <cmath>
/* subarray - any continous part of an array
but only in forward direction i.e value of i always increase
number of subarrays of an array with n elements 
=nC2+n=n*(n+2)/2
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
              ans=max(counter,ans);counter=2;}}return ans;}
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
       int mx=-1999999;
       int ans=0;
       for (int i=0;i<n;i++){
            if (arr[i]>mx && arr[i]>arr[i+1]){
              ans++;}  
       mx=max(mx,arr[i]);}return ans;}
int main(){
       int n;cin>>n;int arr[n];
       for (int i=0;i<n;i++){cin>>arr[i];}
       //sum_of_subarray(arr,n);
       // cout<<lolsubarray(arr,n);
       cout<<no_of_rb_days(arr,n)<<endl;
return 0;
}