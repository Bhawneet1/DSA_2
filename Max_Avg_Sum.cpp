#include <iostream>
#include <vector>
#include <climits>
using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
  int maxSum = INT_MIN;
  int start = 0;
  int end = k - 1;
  int currentSum = 0;

  // Calculate the sum of the first 'k' elements
  for (int i = 0; i < k; i++) {
    currentSum += nums[i];
  }
  maxSum = currentSum;

  // Slide the window over the array
  while (end < static_cast<int>(nums.size()) - 1) {
    currentSum = currentSum - nums[start] + nums[end + 1];
    maxSum = max(maxSum, currentSum);
    start++;
    end++;
  }

  return static_cast<double>(maxSum) / k;
}

int main() {
  vector<int> arr = {1, 12, -5, -6, 50, 3};
  cout << findMaxAverage(arr, 4);
  return 0;
}