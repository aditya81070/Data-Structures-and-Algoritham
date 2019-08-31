#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    long long int a, b;
    cin>>a>>b;
    int gcd = __gcd(a, b);
    cout<<gcd<<" "<<(a*b)/gcd<<endl;
  }
  return 0;
}