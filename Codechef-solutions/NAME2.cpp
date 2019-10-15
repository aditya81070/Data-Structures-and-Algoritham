#include<bits/stdc++.h>
using namespace std;

bool subseq(string s1, string s2) {
  int m = s1.length(), n = s2.length();
  int i = 0;
  for(int j =0; i<m && j<n; j++) {
    if (s1[i] == s2[j]) {
      i++;
    }
  }
  return i == m;
}
int main() {
  int t;
  cin>>t;
  while(t--) {
    string m, w;
    cin>>m>>w;
    if (m == w) {
      cout<<"YES\n";
      continue;
    }
    if (subseq(m, w) || subseq(w,m)) {
      cout<<"YES\n";
    } else {
      cout<<"NO\n";
    }
  }
  return 0;
}