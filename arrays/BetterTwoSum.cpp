#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> findTwoSum(vector<int> arr, int target) {
  map<int, int> hash;
  vector<int> res;
  int value = 0;
  for (int i = 0; i < arr.size(); i++) {
    value = target - arr[i];
    if (hash.find(value) == hash.end()) {
      hash[arr[i]] = i;
    } else {
      res.push_back(i);
      res.push_back(hash[value]);
    }
  }
  if (res.size() != 0) {
    return res;
  }
  res.push_back(-1);
  return res;
}

int main() {
  vector<int> arr = {2,6,5,8,11};
  vector<int> res = findTwoSum(arr, 14);
  for (auto it = res.begin(); it != res.end(); ++it) {
    cout << *it << " ";
  }
}
