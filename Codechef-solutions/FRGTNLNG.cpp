#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n,k, l;
    cin>>n>>k;
    string forgot[n];
    for(int i = 0; i<n; i++) {
      cin>>forgot[i];
    }
    string words="", temp;
    for(int i = 0; i<k; i++) {
      cin>> l;
      for(int j = 0; j<l; j++) {
        cin>>temp;
        words += temp+" ";
      }
    }
    for(int i = 0; i<n; i++) {
      if (words.find(forgot[i]) != string::npos) {
        cout<<"YES ";
      } else {
        cout<<"NO ";
      }
    }
    cout<<endl;
  }
  return 0;
}