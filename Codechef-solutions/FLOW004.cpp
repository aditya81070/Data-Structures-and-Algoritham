#include<stdio.h>
#include<cmath>
int main() {
  int t, n;
  scanf("%d", &t);
  while(t--) {
    scanf("%d", &n);
    int last, digits, first;
    last = n % 10;
    digits = int(log10(n));
    first = n / pow(10, digits);
    printf("%d\n", last + first);
  }
  return 0;
}