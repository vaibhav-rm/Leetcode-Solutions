#include<iostream>
#include<vector>
using namespace std;

int findSingleOcurrnace(vector<int> arr) {
  int count = 0;
  for (int i = 0; i < arr.size(); i++) {
    int num = arr[i];
    for (int j = 0; j < arr.size(); j++) {
      if (num == arr[j]) {
        count++;
      }
    }
    if (count == 1) return num;
    count = 0;
  }
  return -1;
}

int main() {
 vector<int> arr = {1,1,2,3,3,4,4};
 int num = findSingleOcurrnace(arr);
 cout << num;
}
