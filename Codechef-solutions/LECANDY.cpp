#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n, c;
    cin>>n>>c;
    int temp, sum = 0;
    for(int i = 0; i<n; i++) {
      cin>>temp;
      sum +=temp;
    }
    if (sum <= c) {
      cout<<"Yes"<<endl;
    } else {
      cout<<"No"<<endl;
    }
  }
  return 0;
}