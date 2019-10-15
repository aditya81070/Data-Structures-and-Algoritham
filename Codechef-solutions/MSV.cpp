#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) {
      cin>>arr[i];
    }
    int msv = -1, count;
    for(int i = n-1; i>=0; i--) {
      count = 0;
      for(int j = i-1; j>=0; j--) {
        if (arr[j] % arr[i] == 0) {
          count++;
        }
      }
      if (count > msv) {
        msv = count;
      }
    }
    cout<<msv<<endl;
  }
  return 0;
}