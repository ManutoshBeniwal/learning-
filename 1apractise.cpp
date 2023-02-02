#include <bits/stdc++.h>
using namespace std;
#include <cmath>

// 1 4 3 5 3 5 7 7 9



int main(){
      
int n;cin>>n;
int arr[n];
for (int i=0;i<n;i++){
  cin>>arr[i];
}

int minidx=INT_MAX;
const int N=1e5+2;
int idx[N];
for (int i=0;i<N;i++){
  idx[i]=-1;
}

for (int i=0;i<n;i++){
  if (idx[arr[i]]!=-1){
    minidx=min(idx[arr[i]],minidx);
  }else{
  idx[arr[i]]=i;
  
  }
}

if(minidx==INT_MAX){cout<<-1;}
else {cout<<minidx<<endl;}




return 0;
}