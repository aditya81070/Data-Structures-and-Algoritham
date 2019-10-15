#include<stdio.h>

int getTrainingUnits(int input1) {
  if(input1 < 1 || input1 > 100) {
    return -1;
  }
  int a = 1, b =2 , c = 3, temp;
  if (input1 == 1) return a;
  if (input1 == 2) return b;
  if (input1 == 3) return c;
  for(int i = 4; i<=input1; i++) {
    temp = a + b + c;
    a = b;
    b = c;
    c = temp;
  }
  return temp;
}

int main() {
  int input1;
  scanf("%d", &input1);
  printf("%d\n", getTrainingUnits(input1));
  return 0;
}