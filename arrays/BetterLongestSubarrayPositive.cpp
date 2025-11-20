#include <iostream>
#include <vector>
#include <map>
using namespace std;

int findLongestSubarray(vector<int> arr, int k) {
    int n = arr.size();
    map<int, int> preSumMap;  
    int sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }
        int rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}

int main() {
    vector<int> arr = {1, 1, 2, 1, 1, 3};
    int res = findLongestSubarray(arr, 3);
    cout << res;
}

