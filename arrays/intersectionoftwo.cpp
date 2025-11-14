#include<iostream>
#include<vector>
using namespace std;

vector<int> intersection(vector<int> arr1, vector<int> arr2) {
    int n1 = arr1.size();
    int n2= arr2.size();
    vector<int> result;
    vector<int> visited(arr2.size(), 0);
    int i = 0, j = 0;
    for(int i = 0; i < n1; i++) {
      for(int j = 0; j < n2; j++) {
        if (arr1[i] == arr2[j] && visited[j] == 0) {
          result.push_back(arr1[i]);
          visited[j] = 1;
        }
        if (arr2[j] > arr1[i]) {
          break;
        }
      }
    }

    return result;
}

int main() {
  vector<int> arr1 = {1,2,2,3,3,4,5,6};
  vector<int> arr2 = {2,3,3,5,6,6,7};

  vector<int> result = intersection(arr1, arr2);
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
  }
}
