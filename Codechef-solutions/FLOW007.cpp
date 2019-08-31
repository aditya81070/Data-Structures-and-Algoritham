#include<stdio.h>

int main() {
  int t, n;
  scanf("%d", &t);
  while(t--) {
    scanf("%d", &n);
    int s=0, r;
    while(n > 0) {
      r = n % 10;
      s = s*10 + r;
      n = n / 10;
    }
    printf("%d\n", s);
  }
  return 0;
}