---
layout: post
title: "Number_of_Good_Pairs"
---

## Problem: Number_of_Good_Pairs

This is the explanation for **Number_of_Good_Pairs**. Add details here.

### Solution Code
```cpp
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = nums.size() - 1; j > i; j--) {
                if(nums[i] == nums[j]) {
                    count++;
                }
            }
        }
        return count;
    }
};
```
