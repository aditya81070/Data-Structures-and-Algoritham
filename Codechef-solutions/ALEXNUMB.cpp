#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++) {
      cin>>arr[i];
    }
    if (n==1) {
      cout<<0<<endl;
      continue;
    }
    if (n == 2) {
      cout<<1<<endl;
      continue;
    }
    long int result;
    if (n % 2 == 0) {
      result = long(n/2) * (n-1);
    } else {
      result = long(n) * (n-1)/2;
    }
    cout<<result<<endl;
  }
  return 0;
}