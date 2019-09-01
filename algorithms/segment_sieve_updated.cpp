#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void simpleSieve(vector<int>&primes, int limit) {
  bool isPrime[limit+1];
  memset(isPrime, true, sizeof(isPrime));
  for(int p =2; p*p <limit; p++) {
    if(isPrime[p]) {
      for(int i = p*p; i<limit; i+=p) {
        isPrime[i] = false;
      }
    }
  }
  primes.push_back(2);
  for(int i = 3; i<limit; i+=2) {
    if(isPrime[i]) {
      primes.push_back(i);
    }
  }
}

void segmentSieve(ll l, ll r) {
  ll limit = floor(sqrt(r))+1;
  vector<int>primes;
  simpleSieve(primes, limit);
  bool isPrime[r-l+1];
  memset(isPrime, true, sizeof(isPrime));
  if (l == 1) {
    isPrime[0] = false;
  }
  for(int i = 0; i<primes.size(); i++) {
    int curPrime = primes[i];
    ll base = (l/ll(curPrime)) * ll(curPrime);
    if (base < l) {
      base = base + curPrime;
    }
    for(ll j = base; j<=r; j+=curPrime) {
      isPrime[j-l] = false;
    }
    if (base == curPrime) {
      isPrime[base - l] = true;
    }
  }
  for(ll i = l; i<=r; i++) {
    if(isPrime[i-l]) {
      printf("%lld ", i);
    }
  }
}

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    ll l, r;
    scanf("%lld%lld", &l, &r);
    segmentSieve(l, r);
  }
  return 0;
}