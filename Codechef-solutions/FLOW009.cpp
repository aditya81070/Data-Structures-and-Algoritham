#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int quantity, price;
    cin>>quantity>>price;
    double total = quantity * price * 1.0;
    if (quantity > 1000) {
      total = (total - total * 0.1);
    }
    printf("%.6f\n", total);
  }
  return 0;
}