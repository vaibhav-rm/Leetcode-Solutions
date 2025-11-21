#include<iostream>
#include<vector>
using namespace std;

vector<int> findTwoSum(vector<int> arr, int target) {
  int left = 0;
  int right = arr.size() - 1;
  vector<int> res;
  for (int i = 0; i < arr.size(); i++) {
    int current = arr[left] + arr[right];
    if (current == target) {
      res.push_back(left);
      res.push_back(right);
      break;
    } else if (current > target) {
      right--;
    } else {
      left++;
    }
  }
  if (res.size() != 0) {
    return res;
  }
  res.push_back(-1);
  return res;
}

int main() {
  vector<int> arr = {2,5,6,8,11};
  vector<int> res = findTwoSum(arr, 14);
  for (auto it = res.begin(); it != res.end(); ++it) {
    cout << *it << " ";
  }
}
