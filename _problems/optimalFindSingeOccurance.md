---
layout: post
title: "optimalFindSingeOccurance"
---

## Problem: optimalFindSingeOccurance

This is the explanation for **optimalFindSingeOccurance**. Add details here.

### Solution Code
```cpp
#include<vector>
using namespace std;

int findOnce(vector<int> arr) {
  int xornum = 0;
  for (int i = 0; i < arr.size(); i++) {
    xornum = xornum ^ arr[i];
  }
  return xornum;
}

int main() {
  vector<int> arr = {1,1,2,3,3,4,4};
  int result = findOnce(arr);
  cout << result;
}
```
