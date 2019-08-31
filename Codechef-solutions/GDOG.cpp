#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n, k, temp;
    cin>>n>>k;
    int count = 0;
    if (k >= n+1) {
      count = n;
    } else {
      for(int i = 1; i<=k; i++) {
        temp = n % i;
        if (temp > count) {
          count = temp;
        }
      }
    }
    cout<<count<<endl;
  }
  return 0;
}