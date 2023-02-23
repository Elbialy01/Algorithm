#include <iostream>
#include <bits/stdc++.h>
#define loop(n) for(int i=0;i<n;i++)
#define ci(n) cin>>n
#define endl '\n'
#define ll long long
int freq[1000001]={};
using namespace std ;
int partion(vector<int>&arr,int l,int r){
  int pvoit=arr[r];
  int pindex=l;
  for(int i=l;i<r+1;i++){
    if(arr[i]<pvoit){
      swap(arr[i],arr[pindex++]);
    }
  }
  swap(arr[r],arr[pindex]);
  return pindex;
}
int quicksort(vector<int>&arr,int l,int r){

  if(r>l){
   int a= partion(arr,l,r);
   quicksort(arr,l,a-1);
   quicksort(arr,a+1,r);
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  vector<int>v={5,4,2,6,1};
  quicksort(v,0,4);
  for(auto it:v)cout<<it<<" ";



  }

