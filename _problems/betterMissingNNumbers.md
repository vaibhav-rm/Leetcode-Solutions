---
layout: post
title: "betterMissingNNumbers"
---

## Problem: betterMissingNNumbers

This is the explanation for **betterMissingNNumbers**. Add details here.

### Solution Code
```cpp
#include<iostream>
#include<vector>
using namespace std;

int findMissingNumber(vector<int> arr) {
  int n = arr.size();
  vector<int> hash(n + 2, 0);
  
  for (int i = 0; i < n; i++) {
    hash[arr[i]] = 1;
  }
  
  for (int i = 1; i < n + 1; i++) {
    if (hash[i] == 0) {
      return i;
    }
  }

  return -1;

}

int main() {
  vector<int> arr = {1,2,4,5};
  int missingNum = findMissingNumber(arr);
  cout << "The missing number was " << missingNum; 
}
```
