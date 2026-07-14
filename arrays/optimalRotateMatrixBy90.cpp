#include<iostream>
#include<vector>
using namespace std


vector<vector<int>> rotateMatrix90(vector<vector<int>> &mat) {
  for (int i = 0; i < mat.size(); i++) {
    for (int j = i + 1; j < mat.size(); j++) {
      swap(mat[i][j], mat[j][i]);
    }
  }
  for (int i = 0; i < mat.size(); i++) {
    reverse(mat[i].begin(), mat[i].end());
  }
}

int main() {
    int matrix[3][3] = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}
    };


    rotateMatrix90(matrix);

}
