#include<iostream>
#include<map>
#include<vector>
using namespace std;

int findSingleOcurrance(vector<int> arr) {
  map<int, int> hash;
  for (int i = 0; i < arr.size(); i++) {
    hash[arr[i]]++;
  }
  for (auto it = hash.begin(); it != hash.end(); ++it) {
    if (it->second == 1) {
      return it->first;
    }
  }
  return -1;
}

int main() {
  vector<int> arr = {1,1,2,3,3,4,4};
  int num = findSingleOcurrance(arr);
  cout << num;
}
