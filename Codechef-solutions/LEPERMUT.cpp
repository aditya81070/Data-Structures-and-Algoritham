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
    int local= 0, inversion = 0;
    for(int i =0; i<n-1; i++) {
      if(arr[i]>arr[i+1]) local++;
      for(int j = i+1; j<n; j++) {
        if (arr[i]>arr[j]) inversion++;
      }
    }
    if (local == inversion) {
      cout<<"YES\n";
    } else {
      cout<<"NO\n";
    }
  }
  return 0;
}