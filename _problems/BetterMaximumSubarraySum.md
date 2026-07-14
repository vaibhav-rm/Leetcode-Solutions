---
layout: post
title: "BetterMaximumSubarraySum"
---

## Problem: BetterMaximumSubarraySum

This is the explanation for **BetterMaximumSubarraySum**. Add details here.

### Solution Code
```cpp
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int MaxSubarraySum(vector<int> arr) {
  int maxi = INT_MIN;
  for (int i = 0; i < arr.size(); i++) {
    int sum = 0;
    for (int j = 0; j < arr.size(); j++) {
      sum += arr[j];
      maxi = max(sum, maxi);
    }
  }
  return maxi;
}


int main() {
  vector<int> arr = {1,2,3,4,5};
  cout << MaxSubarraySum(arr);
}
```
