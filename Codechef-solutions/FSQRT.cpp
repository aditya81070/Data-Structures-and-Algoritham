#include<stdio.h>
#include<cmath>

int main() {
  int t, n;
  scanf("%d", &t);
  while(t--) {
    scanf("%d", &n);
    int ans = sqrt(n);
    printf("%d\n", ans);
  }
  return 0;
}