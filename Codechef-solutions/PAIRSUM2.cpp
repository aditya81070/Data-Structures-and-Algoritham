#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n, query, p, q;
    cin>>n>>query;
    int b[n-1], a[n];
    a[0] = 10;
    for(int i = 0; i<n-1; i++) {
      cin>>b[i];
    }
    for(int i = 1; i<n; i++) {
      a[i] = b[i-1] - a[i-1];
    }
    while(query--) {
      cin>>p>>q;
      p -=1;
      q -=1;
      if ((p-q)%2 == 0) {
        cout<<"UNKNOWN\n";
      } else {
        cout<<a[p] + a[q]<<endl;
      }
    }
  }
  return 0;
}