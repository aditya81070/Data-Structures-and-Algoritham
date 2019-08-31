#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n, m, k;
    cin>>n>>m>>k;
    int small = min(n, m), large = max(n, m), count = 1;
    while(small < large && count<=k) {
      small++;
      count++;
    }
    if (small == large) {
      cout<<0<<endl;
    } else if (count>k) {
      cout<<(large-small)<<endl;
    }
  }
  return 0;
}