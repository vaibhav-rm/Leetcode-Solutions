#include<iostream>
#include<vector>
using namespace std;

void leftRotate(vector<int>& arr, int n) {
  int first = arr[0];
  for (int i = 0; i <= n; i++) {
    if (i == n-1) {
      arr[i] = first;
      break;
    }
    arr[i] = arr[i + 1];
  }
}

int main() {
  vector<int> arr = {1,2,3,4,5};
  leftRotate(arr, 5);
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
