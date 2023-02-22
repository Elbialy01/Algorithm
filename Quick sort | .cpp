#include <iostream>
#include <bits/stdc++.h>
#define loop(n) for(int i=0;i<n;i++)
#define ci(n) cin>>n
#define endl '\n'
#define ll long long
int freq[1000001]={};
using namespace std ;
void quicksort(vector<int>&arr,int left,int rigth){
  int i=left,j=rigth;
  int pviot=arr[(i+j)/2];
  while(i<=j){
    while(arr[i]<pviot)i++;
    while(arr[j]>pviot)j--;
    if(i<=j){
      int temp=arr[j];
      arr[j]=arr[i];
      arr[i]=temp;
      i++;j--;
    }
  }
  if(j>left){
    quicksort(arr,left,j);
    if(i<rigth)quicksort(arr,i,rigth);
  }
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  vector<int>arr={1,3,5,4,7};
  quicksort(arr,0,4);
  for(auto it:arr)cout<<it<<" ";

  

  }

