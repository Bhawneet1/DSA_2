#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Missing_number(vector<int> &arr)
{
  int sum1 = 0;
  int sum2 = 0;
  for (int i = 0; i <= arr.size(); i++)
  {
    sum1 += i;
  }
  for (int j = 0; j < arr.size(); j++)
  {
    sum2 += arr[j];
  }
  return sum1 - sum2;
}
int main()
{
  vector<int> arr = {2,3, 0, 1};
  cout << Missing_number(arr);
  return 0;
}