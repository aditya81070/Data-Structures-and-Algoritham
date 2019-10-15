#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n;
    cin>>n;
    int fav = 0, opp = 0;
    while(n--) {
      int c, a, b;
      cin>>c>>a>>b;
      if (c == 1) {
        fav = a;
        opp = b;
        cout<<"YES\n";
      } else {
        if (a == b) {
          fav = a;
          opp = b;
          cout<<"YES\n";
        } else if ((a >= fav && a >= opp) && (b >= fav && b>= opp)) {
          cout<<"NO\n";
        } else {
          if (a >= fav && a<=opp) {
            fav = a;
            opp = b;
            cout<<"YES\n";
          } else if (a<=fav && a>= opp) {
            fav = b;
            opp = a;
            cout<<"YES\n";
          } else if (b>=fav && b<= opp) {
            fav = b;
            opp = a;
            cout<<"YES\n";
          } else if (b<=fav && b>= opp) {
            opp = b;
            fav = a;
            cout<<"YES\n";
          } else {
            cout<<"NO\n";
          }
        }
      }
      // cout<<"fav"<<fav<<" opp"<<opp<<endl;
    }
  }
  return 0;
}