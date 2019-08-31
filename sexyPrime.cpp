#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int isPrime(long int n, long int *primes, int m) {
  float condition = sqrt(n);
  for (long int i =2; i<= condition; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  primes[n-m] = 1;
  return 1;
}
int main() {
  long int m,n;
  cin>>m>>n;
  long int pairs = 0, a, b;
  long int primes[n-m+1];
  memset(primes, 0, sizeof primes);
  if (n <11) {
    cout<<0;
  } else {
    a=5, b=11;
    while (a <=n && b <= n) {
      if (b-a == 6 && primes[a-m] != 0 && primes[b-m]!=0) {
        pairs++;
      } else if (b-a == 6 && isPrime(a, primes, m) && isPrime(b, primes, m)) {
        pairs++;
      }
      a+=2;
      b+=2;
    }
  }
  cout<<pairs;
}