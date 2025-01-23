#include <iostream>
#include <vector>
using namespace std;
int Missing_number(vector<int> &arr){
  int ans=0;
  for(int i=0;i<(int)arr.size();i++){
    ans^=arr[i];
  }
  for(int j=0;j<=(int)arr.size();j++){
    ans^=j;
  }
  return ans;
}
int main(){
  vector<int> arr={2,3,0,1};
  cout<<Missing_number(arr);
  return 0;
}