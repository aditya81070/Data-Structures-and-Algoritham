#include<bits/stdc++.h>
using namespace std;

struct Complex {
  int img, real;
};

int main() {
  Complex *c = new Complex[10];
  c[0].img = 4;
  c[0].real = 5;
  cout<< c[0].real << " +i" <<c[0].img;
  delete c;
  return 0;
}