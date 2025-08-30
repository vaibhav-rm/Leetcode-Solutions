#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int orignalNum = x;
        long long revNum = 0;
        while(x != 0) {
            int lastdigit = x % 10;
            x = x / 10;
            revNum = (revNum * 10) + lastdigit;
        }
        if (orignalNum == revNum) return true;
        else return false;
    }
};