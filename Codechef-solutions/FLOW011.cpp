#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int temp;
    cin>>temp;
    double salary = temp * 1.0, gross;
    if (temp < 1500) {
      gross = salary + salary *0.1 + salary *0.9;
    } else {
      gross = salary + 500 + salary *0.98;
    }
    printf("%f\n", gross);
  }
  return 0;
}