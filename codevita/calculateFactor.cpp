#include<stdio.h>

int main () {
  int n;
  scanf("%d", &n);
  printf("1 ");
  for(int i=2; i*i<=n; i++) {
    if (n%i==0) {
      printf("%d ", i);
    }
  }
  printf("%d\n", n);
  return 0;
}