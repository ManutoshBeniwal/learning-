#include <bits/stdc++.h>
using namespace std;
//max sum of sub array. o(n2)
/*                sum


-1                -1
-1 4               3
-1 4 7             10
-1 4 7 2           12
4                  4
4 7                11
4 7 2              13
7                   7
7 2                 9
2                   2


*/
void subarr(int arr[],int n){
    int st=0,e=0,sum=0,mxsum=INT_MIN;
while (st<n){
    if (e<n){for(int i=st;i<=e;i++){
        //cout<<arr[i];
        sum+=arr[i];
    }e++;//cout<<sum<<endl;
    mxsum=max(mxsum,sum);
    sum=0; //sum of the current subarray
    }else {st++;e=st;
    if (st==n){cout<<mxsum<<endl;}}}}


    
//solution of O(n),kadane's algorithm

int msas(int arr[],int n){
    int mxsum=INT_MIN,cursum=0;
    for (int i=0;i<n;i++){
        cursum+=arr[i];
        if(cursum<0){
            cursum=0;
        }mxsum=max(mxsum,cursum);
    }return mxsum;}





int main(){
int n;cin>>n;int arr[n];
for(int i=0;i<n;i++){cin>>arr[i];}
//subarr(arr,n);
//cout<<msas(arr,n)<<endl;



    return 0;
}  