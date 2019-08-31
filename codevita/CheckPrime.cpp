#include<stdio.h>


int main () {
  long int n;
  scanf("%ld", &n);
  long int arr[n+1];
  for (long int i=0; i<n+1;i++) {
    arr[i] = i;
  }
  for(long int p=2; p*p <= n; p++) {
    if(arr[p]!=0) {
      for(long int j= p*2; j<=n; j+=p) {
        arr[j] = 0;
      }
    }
  }
  for(long int i=2; i<=n;i++) {
    if (arr[i]) {
    printf("%ld ", arr[i]);
    }
  }
  return 0;
}