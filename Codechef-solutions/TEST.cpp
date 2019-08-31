#include<stdio.h>

int main() {
  int temp;
  while(true) {
    scanf("%d", &temp);
    if (temp == 42) break;
    printf("%d\n", temp);
  }
  return 0;
}