#include<bits/stdc++.h>
typedef long long ll;
#define MAX 100000000
using namespace std;
int main() {
  bool *primes = new bool[MAX+1];
  for(ll i =0; i<MAX+1; i++) {
    primes[i] = true;
  }
  ll sqr = sqrt(MAX);
  primes[0] = false;
  primes[1] = false;
  for(ll p=2; p<=sqr; p++){
    if(primes[p]) {
      for(ll i = p*p; i<=MAX; i+=p) {
        primes[i] = false;
      }
    }
  }
  int t;
  cin>>t;
  while(t--){
    ll m, n;
    cin>>m>>n;
    for(ll i = m; i<=n; i++) {
      if(primes[i]){
        printf("%lld ", i);
      }
    }
  }
  return 0;
}