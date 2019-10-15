#include<bits/stdc++.h>
using namespace std;

bool isFair(int *arr, int k, int n) {
  for(int i = 1; i<=n; i++) {
    if (i != k && arr[i] < arr[k]) {
      return false;
    }
  }
  return true;
}
int main() {
  int t;
  cin>>t;
  while(t--) {
    int n, m;
    cin>>n>>m;
    int arr[n+1], temp;
    memset(arr, 0, sizeof(arr));
    int flag = 1;
    for(int i = 0; i<m; i++) {
      cin>>temp;
      if(isFair(arr, temp, n)) {
        arr[temp]++;
      } else {
        flag = 0;
      }
    }
    if (flag == 0) {
      cout<<"NO\n";
    } else {
      cout<<"YES\n";
    }
  }
  return 0;
}