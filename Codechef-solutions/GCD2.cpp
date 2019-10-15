#include<bits/stdc++.h>
using namespace std;

int _gcd(int a, int b) {
  if ( a== 0) return b;
  return _gcd(b %a, a);
}
int reduce(int a, string b) {
  int mod = 0;
  for(int i =0; i<b.length(); i++) {
    mod = (mod*10 + b[i]-'0') % a;
  }
  return mod;
}
int gcd(int a, string b) {
  int mod = reduce(a,b);
  return _gcd(a, mod);
}
int main() {
  int t;
  cin>>t;
  while(t--) {
    int a;
    string b;
    cin>>a;
    cin>>b;
    if (a == 0) {
      cout<<b<<endl;
      continue;
    }
    cout<<gcd(a, b)<<endl;
  }
  return 0;
}