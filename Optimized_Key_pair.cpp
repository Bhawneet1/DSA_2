#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool key_pair(int arr[],int n,int target){
  int i=0;
  int j=n-1;
  sort(arr,arr+n);
  while(i<=j)
  {
    if(arr[i]+arr[j]>target){
      j--;
    }
    else if(arr[i]+arr[j]<target){
      i++;
    }
    else{
      return true;
    }
  }
  return false;
}
int main()
{
    int arr[]={1,4,45,6,10,-8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=0;
    if(key_pair(arr,n,target))
    {
      cout<<"Array has two elements with the given sum";
    }
    else
    {
      cout<<"Array doesn't have two elements with the given sum";
    }
}
