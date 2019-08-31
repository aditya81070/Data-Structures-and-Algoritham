#include<stdio.h>

int main() {
  int t;
  long int n;
  scanf("%d", &t);
  while(t--) {
    scanf("%ld", &n);
    long int cupSize;
    cupSize = int(n / 2) + 1;
    printf("%ld\n", cupSize);
  }
    return 0;
}