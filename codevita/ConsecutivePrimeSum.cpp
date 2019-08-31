#include<stdio.h>
#include<cmath>
int checkPrime(long int n) {
  if (n ==1) return 0;
  if (n==2 || n==3) return 1;
  if(n%2==0) return 0;

  for(long int i = 3; i <=n; i++) {
    if(n%i==0) {
      return 0;
    }
  }
  return 1;
}

int main () {
  long int n;
  scanf("%ld", &n);
  long int totalSum=2, count=0;
  for(long int i = 3; i<=n; i++) {
    if (checkPrime(i)) {
      totalSum+=i;
      if(totalSum<=n && checkPrime(totalSum)){
        count++;
      }
    }
  }
  printf("%ld\n", count);
  return 0;
}