#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int MaxSubarraySum(vector<int> arr) {
  int sum = 0, maxi = INT_MIN;
  for (int i = 0; i < arr.size(); i++) {
    sum += arr[i];

     if (sum > maxi) {
       maxi = sum;
     }

    if (sum < 0) {
      sum = 0;
    }
  }
  return maxi;
}

int main() {
  vector<int> arr = {-2,-3,4,-1,-2,1,5,-3};
  cout << MaxSubarraySum(arr);
}
