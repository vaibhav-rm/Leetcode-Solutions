---
layout: post
title: "BruteMajorityElement"
---

## Problem: BruteMajorityElement

This is the explanation for **BruteMajorityElement**. Add details here.

### Solution Code
```cpp
#include<iostream>
#include<vector>
using namespace std;

int MajorityElement(vector<int> arr, int n) {
  for (int i = 0; i < n; i++) {
    int count = 0;
    for (int j = 0; j < n; j++) {
      if (arr[j] == arr[i]) {
        count++;
      }
    }
    if (count > n/2) {
      return arr[i];
    }
  }
  return -1;
}


int main() {
  vector<int> arr = {1,1,2,3,4,1,1,2,1};
  int n = 9;
  cout << MajorityElement(arr, n);
}
```
