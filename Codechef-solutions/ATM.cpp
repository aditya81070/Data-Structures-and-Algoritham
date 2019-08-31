#include <bits/stdc++.h>
using namespace std;

int main () {
  int withdraw;
  float balance;
  scanf("%d%f", &withdraw, &balance);
  float withdrawLimit = withdraw + 0.50;
  if (withdraw % 5 == 0 && withdrawLimit <= balance) {
    balance -= withdrawLimit;
    cout<<fixed<<setprecision(2)<<balance;
  } else {
    cout << fixed << setprecision(2) << balance;
  }
  return 0;
}