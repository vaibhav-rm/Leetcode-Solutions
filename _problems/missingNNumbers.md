---
layout: post
title: "missingNNumbers"
---

## Problem: missingNNumbers

This is the explanation for **missingNNumbers**. Add details here.

### Solution Code
```cpp
#include<iostream>
#include<vector>
using namespace std;

int findMissingNum(vector<int> arr) {
  int n = arr.size();
  int counter = 0;
  for (int i = 0; i < arr.size(); i++) {
    counter++;
    if(arr[i] != counter) {
      return counter;
    }
  }
  return -1;
}

int main() {
  vector<int> arr = {1,2,4,5};
  int missingNum = findMissingNum(arr);
  cout << "The missing number was " << missingNum << " ";
}
```
