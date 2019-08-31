#include<stdio.h>
#include<cmath>

int main() {
  int t;
  scanf("%d", &t);
  long int n;
  while(t--) {
    scanf("%ld", &n);
    long int count = 0, digits;
    int last, first;
    while(n > 0) {
      last = n % 10;
      n = n/10;
      digits = int(log10(n));
      first = n / pow(10, digits);
      n = n - first * pow(10, digits);
      if (first == 4) {
        count++;
      }
      if(last == 4) {
        count++;
      }
    }
    printf("%ld", count);
  }
  return 0;
}