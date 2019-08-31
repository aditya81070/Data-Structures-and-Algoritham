#include<stdio.h>
#define MAX 100000

void multiply(int i, int *arr, int &m) {
  int temp = 0, x= 0;
  for (int j=0; j<m;j++) {
    x = arr[j] * i + temp;
    arr[j] = x % 10;
    temp = x / 10;
  }
  while (temp > 0) {
    arr[m] = temp % 10;
    temp /= 10;
    m+=1;
  }
}
int main () {
  int t, arr[MAX];
  scanf("%d", &t);
  while (t--) {
    int n, m=1, i=1;
    arr[0] = 1;
    scanf("%d", &n);
    while(i<=n) {
      multiply(i, arr, m);
      i++;
    }
    for(int i = m-1; i>=0; i--) {
      printf("%d", arr[i]);
    }
    printf("\n");
  }
  return 0;
}