---
layout: post
title: "BetterArrayOf012"
---

## Problem: BetterArrayOf012

This is the explanation for **BetterArrayOf012**. Add details here.

### Solution Code
```cpp
#include<iostream>
#include<vector>
using namespace std;

void sortArray(vector<int>& arr) {
  int count0 = 0, count1 = 0, count2 = 0;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == 0) count0++;
    else if (arr[i] == 1) count1++;
    else count2++;
  }
  for (int i = 0; i < count0; i++) arr[i] = 0;
  for (int i = count0; i < count0 + count1; i++) arr[i] = 1;
  for (int i = count0 + count1; i < arr.size(); i++) arr[i] = 2;
}

int main() {
  vector<int> arr = {0,1,2,0,1,2,1,2,0,0,0,1};
  sortArray(arr);
  for (auto it = arr.begin(); it != arr.end(); ++it) {
    cout << *it << " ";
  }
}
```
