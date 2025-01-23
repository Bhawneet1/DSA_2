#include<iostream>
using namespace std;
bool key_pair(int arr[],int n,int target){
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++){
      if(arr[i]+arr[j]==target)
      {
        return true;
      }
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
