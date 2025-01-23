#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int pivot(vector<int> arr){
  int sum1=0;
  int sum2=0;
  for(int i=0;i<arr.size();i++){
    for(int j=0;j<i;j++)
    {
      sum1+=arr[j];
    }
    for(int k=i+1;k<arr.size();k++)
    {
      sum2+=arr[k];
    }
    if(sum1==sum2){
      return i;
    }
    
  }
  
}
int main(){
  vector<int> arr={1,7,3,6,5,6};
  cout<<pivot(arr);
  return 0;
}