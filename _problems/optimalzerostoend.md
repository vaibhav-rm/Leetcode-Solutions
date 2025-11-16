---
layout: post
title: "optimalzerostoend"
---

## Problem: optimalzerostoend

This is the explanation for **optimalzerostoend**. Add details here.

### Solution Code
```cpp
#include<iostream>
#include<vector>
using namespace std;

void zerotoend(int arr[], int n) {
  int j = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] != 0) {
      swap(arr[i], arr[j]);
      j++;
    }
  }
}

int main() {
  int arr[] = {1,0,2,3,0,0,4,5,1};
  zerotoend(arr, 9);
  for (int i = 0; i < 9; i++) {
    cout << arr[i] << " ";
  }
}
```
