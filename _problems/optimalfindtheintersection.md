---
layout: post
title: "optimalfindtheintersection"
---

## Problem: optimalfindtheintersection

This is the explanation for **optimalfindtheintersection**. Add details here.

### Solution Code
```cpp
#include<iostream>
#include<vector>
using namespace std;

vector<int> findIntersection(vector<int> a, vector<int> b) {
  int n1 = a.size();
  int n2 = b.size();
  int i = 0;
  int j = 0;
  vector<int> res;

  while(i < n1 && j < n2) {
    if (a[i] == b[j]) {
      res.push_back(a[i]);
      i++;
      j++;
    } else if (a[i] < b[j]) {
      i++;
    } else {
      j++;
    }
  }

  return res;

}

int main() {
  vector<int> a = {1,2,2,3,3,4,5,6};
  vector<int> b = {2,3,3,5,6,6,7};

  vector<int> res = findIntersection(a, b);

  for(int i = 0; i < res.size(); i++) {
    cout << res[i] << " ";
  }

}
```
