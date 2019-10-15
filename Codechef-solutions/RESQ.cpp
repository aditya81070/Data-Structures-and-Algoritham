#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
  int t;
  cin>>t;
  while(t--) {
    ll n;
    cin>>n;
    double sqr = sqrt(n);
    if (sqr - floor(sqr) == 0 && n!=1) {
      cout<<0<<endl;
    } else {
      ll diff = INT_MAX;
      for(ll i = 1; i*i<= n; i++) {
        if (n % i == 0) {
          if (diff > abs(n/i -i)) {
            diff = abs(n/i-i);
          }
        }
      }
      cout<<diff<<endl;
    }
  }
  return 0;
}