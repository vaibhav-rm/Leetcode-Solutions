#include<iostream>
using namespace std;

void reverse(int arr[], int start, int end) {
  while(start <= end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

void leftRotate(int arr[], int n, int d) {
  reverse(arr, 0, d-1);
  reverse(arr, d, n-1);
  reverse(arr, 0, n-1);
}

int main() {
  int arr[] = {1,2,3,4,5};
  int n = 5;
  int d = 2;
  leftRotate(arr, n, d);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}
