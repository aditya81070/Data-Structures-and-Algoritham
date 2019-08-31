#include<iostream>
#include<vector>
using namespace std;

int kGrammer(int row, int k) {
  vector<short int> v;
  int i, j, temp_size;
  v.push_back(0);
  for (i = 0; i<row; i++) {
    temp_size = v.size();
    for (j = 0; j< temp_size; j++) {
      v.push_back(!v[j]);
    }
  }
  return v[k-1];
}

int main () {
  int row, k;
  scanf("%d%d", &row, &k);
  int result = kGrammer(row, k);
  printf("%d\n", result);
  return 0;
}