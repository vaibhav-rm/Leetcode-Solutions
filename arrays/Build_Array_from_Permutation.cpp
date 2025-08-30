#include <istream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> output;
        for (auto it = nums.begin(); it < nums.end(); it++) {
            output.push_back(nums[*(it)]);
        }
        return output;
}
};