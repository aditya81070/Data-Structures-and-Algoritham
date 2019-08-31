#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int g;
    cin>>g;
    while(g--) {
      int I, N, Q;
      cin>>I>>N>>Q;
      int heads = 0, tails = 0;
      if (N & 1) {
        if (I == 1) {
          heads = N/2;
          tails = heads+1;
        } else {
          tails = N/2;
          heads = tails+1;
        }
      } else {
        heads = N/2;
        tails = N/2;
      }
      if (Q == 1) {
        cout<<heads<<endl;
      } else {
        cout<<tails<<endl;
      }
    }
  }
  return 0;
}