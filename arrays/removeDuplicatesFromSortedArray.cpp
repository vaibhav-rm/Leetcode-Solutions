#include<iostream>
#include<vector>
#include<set>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int i = 0;
    for (int j = 1; j < nums.size(); j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}

int main() {
  vector<int> arr = {1,1,2};
  int k = removeDuplicates(arr);
  cout << k << " \n";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
