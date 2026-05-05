#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int MaxSubarraySum(vector<int> arr) {
  int maxi = INT_MIN;
  for (int i = 0; i < arr.size(); i++) {
    for (int j = i; j < arr.size(); j++) {
      int sum = 0;
      for (int k = i; k <= j; k++) {
        sum += arr[k];
        maxi = max(sum, maxi);
      }
    }
  }
  return maxi;
}

int main() {
  vector<int> arr = {1,2,3,4,5};
  cout << MaxSubarraySum(arr);
}
