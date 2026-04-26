#include<iostream>
#include<vector>
#include<map>

int MajorityElement(vector<int> arr) {
  map<int, int> hash;
  for (int i = 0; i < arr.size(); i++) {
    hash[arr[i]]++;
  }
  for (auto it : hash) {
    if (it.second > (arr.sizr() / 2)) {
      return it.first;
    }
  }
  return -1;
}
