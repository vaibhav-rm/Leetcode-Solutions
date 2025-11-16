---
layout: post
title: "optimalMissingNNumbers"
---

## Problem: optimalMissingNNumbers

This is the explanation for **optimalMissingNNumbers**. Add details here.

### Solution Code
```cpp
#include<iostream>
#include<vector>
using namespace std;

int findMissing(vector<int> arr) {
  int n = arr.size();
  int xor1 = 0;
  int xor2 = 0;

  for (int i = 0; i < n; i++) {
    xor1 = xor1 ^ arr[i];
    xor2 = xor2 ^ (i+1);
  }

  return xor1 ^ xor2;
  
}

int main() {
  vector<int> arr = {0,1,2,4,5};
  int missingNum = findMissing(arr);
  cout << "The missing number was " << missingNum;
}
```
