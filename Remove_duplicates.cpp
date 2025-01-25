#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=1;
        while(j<nums.size()){

            if(nums[i]==nums[j]){
                j++;
            }
            else{
                nums[++i]=nums[j++];
            }
        }
        return i+1;
}
int main(){
  vector<int> arr={1,1,2};
  cout<<removeDuplicates(arr);
  return 0;
}