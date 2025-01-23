#include <iostream>
#include <vector>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int pivot(vector<int> &arr)
{
  int total_sum = accumulate(arr.begin(), arr.end(), 0);
  int left_sum = 0;
  for (int i = 0; i < arr.size(); ++i)
  {
    if (left_sum == total_sum - left_sum - arr[i])
    {
      return i;
    }
    left_sum += arr[i];
  }
  return -1; // return -1 if no pivot index is found
}
int main()
{
  vector<int> arr = {1, 7, 3, 6, 5, 6};
  cout << pivot(arr);
  return 0;
}