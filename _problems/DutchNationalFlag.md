---
layout: post
title: "DutchNationalFlag"
---

## Problem: DutchNationalFlag

This is the explanation for **DutchNationalFlag**. Add details here.

### Solution Code
```cpp
#include<iostream>
#include<vector>
using namespace std;

void dutchNationalFlag(vector<int>& arr, int n) {
  int mid = 0;
  int low = 0;
  int high = n - 1;
  while (mid <= high) {
    if (arr[mid] == 0) {
      swap(arr[mid], arr[low]);
      low++;
      mid++;
    } else if (arr[mid] == 1) {
      mid++;
    } else {
      swap(arr[mid], arr[high]);
      high--;
    }
  }
}

int main() {
  vector<int> arr = {0,1,2,1,2,0};
  int n = 6;
  for (const auto& element : arr) {
    cout << element << " ";
  }
  dutchNationalFlag(arr,n);
  cout << "After algo \n";
  for (const auto& element : arr) {
    cout << element << " ";
  }
  return 0;
}
```
