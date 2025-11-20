---
layout: post
title: "BruteLongestSubarrayPositive"
---

## Problem: BruteLongestSubarrayPositive

This is the explanation for **BruteLongestSubarrayPositive**. Add details here.

### Solution Code
```cpp
#include<iostream>
#include<vector>
using namespace std;

int findLongestSubArray(vector<int> arr, int k) {
  int n = arr.size();
  int len = 0;
  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = i; j < n; j++) {
      sum = sum + arr[j];
      if (sum == k) len = max(len, j-i+1);
    }
  }
  return len;
}

int main() {
  vector<int> arr = {1,2,3,1,1,1,1,4,2,3};
  int len = findLongestSubArray(arr, 3);
  cout << len;
}
```
