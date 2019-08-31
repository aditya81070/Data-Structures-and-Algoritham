#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i =0; i<n; i++) {
      cin>>arr[i];
    }
    if (arr[0] == -1) {
      if (arr[1] == -1) {
        arr[0] = 1;
      } else {
        if (arr[1] + 1 > k) {
          arr[0] = arr[1]-1;
        } else {
          arr[0] = arr[1]+1;
        }
      }
    }
    int diff;
    for(int i =1; i<n-1; i++) {
      if (arr[i] == -1) {
        diff = abs(arr[i-1] - arr[i+1]);
        if (diff != arr[i-1] && diff != arr[i+1]) {
          arr[i] = diff;
        } else if (diff == 0) {
          arr[i] = diff+1;
        } else {
          arr[i] = 
        }
      }
    }
  }
  return 0;
}