---
layout: post
title: "maximumConsecetiveOnes"
---

## Problem: maximumConsecetiveOnes

This is the explanation for **maximumConsecetiveOnes**. Add details here.

### Solution Code
```cpp
#include<iostream>
#include<vector>
using namespace std;

int maximumOnes(vector<int> arr) {
  int count = 0;
  int max = 0;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] != 1) {
      if (count > max) {
        max = count;
        count = 0;
      }
    } else {
      count++;
    }
  }
  return max;
}

int main() {
  vector<int> arr = {1,1,0,1,1,1,0,1,1};
  int max = maximumOnes(arr);
  cout << "The maximum number of ones is " << max;
}
```
