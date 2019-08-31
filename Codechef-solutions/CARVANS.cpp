#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    int n;
    scanf("%d", &n);
    int count = 1, currentMax, temp;
    scanf("%d", &currentMax);
    for(int i = 1; i<n; i++) {
      scanf("%d", &temp);
      if (temp <currentMax) {
        count++;
        currentMax = temp;
      }
    }
    printf("%d\n", count);
  }
  return 0;
}