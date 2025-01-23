#include <iostream>
#include <vector>

using namespace std;

void shiftArrayRight(vector<int>& arr, int k) {
  int n = arr.size();
  k = k % n; // In case k is greater than the size of the array
  vector<int> temp(arr.end() - k, arr.end());
  for (int i = n - 1; i >= k; --i) {
    arr[i] = arr[i - k];
  }
  for (int i = 0; i < k; ++i) {
    arr[i] = temp[i];
  }
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
  int k = 3;

  shiftArrayRight(arr, k);

  for (int i : arr) {
    cout << i << " ";
  }

  return 0;
}