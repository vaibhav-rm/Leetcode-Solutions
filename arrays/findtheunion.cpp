#include<iostream>
#include<set>
using namespace std;

int[] findunion(int arr1[],int arr2[], int n, int n2) {
  set<int> result;
  for (int i = 0; i < n; i++) {
    result.insert(arr1[i]);
  }
  for (int i = 0; i < n2; i++) {
    result.insert(arr2[i]);
  }
  int resultArr[result.size()];
  int i = -1;
  for (auto it = result.begin(); it != result.end(); ++it) {
    resultArr[++i] = *it;
  }
  return resultArr;
}

int main() {
  int arr1[] = {1,1,2,3,4};
  int arr2[] = {2,2,3,5,6};

  int result[] = findunion(arr1, arr2, 5, 5);
  for (int* it = result; it != result + (sizeof(result) / sizeof(result[0])); ++it) {
    cout << *it << " ";
  }
  
}
