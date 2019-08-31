#include<stdio.h>

struct aa
{
  int a;
  float b;
  struct aa var;
};
int main () {
  struct aa something;
  something.a = 1;
  something.b = 3.40;
  printf("%d\n", something.a);
  return 0;
}