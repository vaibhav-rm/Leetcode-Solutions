---
layout: post
title: "BruteTwoSum"
---

## Problem: BruteTwoSum

This is the explanation for **BruteTwoSum**. Add details here.

### Solution Code
```cpp
#include<iostream>
#include<vector>
using namespace std;

vector<int> findTwoSum(vector<int> arr, int target) {
  vector<int> result;
  for (int i = 0; i < arr.size(); i++) {
    for (int j = i+1; j < arr.size(); j++) {
      if (target == (arr[i] + arr[j])) {
        result.push_back(i);
        result.push_back(j);
      }
    }
  }
  if (result.size() != 0) {
   return result;
  }
  result.push_back(-1);
  return result;
}

int main() {
  vector<int> arr = {2,6,5,8,11};
  vector<int> res = findTwoSum(arr, 14);
  for (auto it = res.begin(); it != res.end(); ++it) {
    cout << *it << " ";
  }
}
```
