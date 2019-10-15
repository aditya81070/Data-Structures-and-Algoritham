#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  string m;
  cin>>m;
  while(t--) {
    string q;
    cin>>q;
    string result = "";
    for(int i = 0; i<q.length(); i++) {
      if (q[i] == '_') {
        result += ' ';
      } else if (q[i]>='a' && q[i]<= 'z') {
        result += (m[q[i]-'a']);
      } else if (q[i]>='A' && q[i] <= 'Z') {
        result += (m[q[i]-'A']-32);
      } else {
        result += q[i];
      }
    }
    cout<<result<<endl;
  }
  return 0;
}