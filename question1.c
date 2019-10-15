#include<stdio.h>

int checkSequence(int input1, int input2) {
  int i;
  if (input1 <= 0|| input2<=0) {
    return -1;
  } else if (input1 == input2) {
    return input1 * input2;
  } else if (input1 < input2) {
    int total = 0;
    for(i = input1; i<=input2; i++) {
      total += i;
    }
    return total;
  }
  int temp = input1;
  for(i = input1-1; i>=input2; i--){
    temp -=i;
  }
  return temp;
}

int main() {
  int a, b;
  scanf("%d%d", &a,&b);
  printf("%d\n", checkSequence(a, b));
  return 0;
}