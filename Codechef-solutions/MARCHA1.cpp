#include<bits/stdc++.h>
using namespace std;
// TODO - this problem will be solved by dynamic programming
// Tags: dynamic programming
bool isSubset(int *arr, int n, int sum) {
  if (sum == 0) {
    return true;
  }
  if (n == 0 && sum !=0) {
    return false;
  }
  if(arr[n-1] > sum) {
    isSubset(arr, n-1, sum);
  }
  return isSubset(arr, n-1, sum-arr[n-1]) || isSubset(arr, n-1, sum);
}
int main() {
  int t;
  cin>>t;
  while(t--) {
    int n, m;
    cin>>n>>m;
    int arr[n];
    for(int i = 0; i<n; i++) {
      cin>>arr[i];
    }
    bool hasToPay = isSubset(arr, n, m);
    if(hasToPay) {
      cout<<"YES\n";
    } else {
      cout<<"NO\n";
    }
  }
  return 0;
}