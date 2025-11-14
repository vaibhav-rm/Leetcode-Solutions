---
layout: post
title: "zerostoend"
---

## Problem: zerostoend

This is the explanation for **zerostoend**. Add details here.

### Solution Code
```cpp
#include<iostream>
#include<vector>
using namespace std;

void moveZeros(vector<int>& arr, int n) {
 vector<int> temp;
 for (int i = 0; i < n; i++) {
    if (arr[i] != 0) {
      temp.push_back(arr[i]); 
    }
 }

 for (int i = 0; i < temp.size(); i++) {
    arr[i] = temp[i];
 }

 for (int i = temp.size(); i < n; i++) {
    arr[i] = 0;
 }
}

int main() {
  vector<int> arr = {1,0,2,0,3,0,4,0,5};
  moveZeros(arr, 9);
  for (int i = 0; i < 9; i++) {
    cout << arr[i] << " ";
  }
}
```
