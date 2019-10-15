#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n, k;
    cin>>n>>k;
    vector<long long int>arr(n);
    for(int i = 0; i<n; i++) {
      cin>>arr[i];
    }
    while(arr.size()>=k) {
      n = arr.size();
      vector<long long int> temp, sum = arr;
      for(int i = 1; i<n; i++) {
        sum[i] +=sum[i-1];
      }
      int j = k-1;
      for(; j<n; j+=k) {
        if (j == k-1) {
          temp.push_back(sum[j]);
        } else {
          temp.push_back(sum[j] - sum[j-k]);
        }
      }
      if (j-k < n-1) {
        for(int i = j-k+1; i<n; i++) {
          temp.push_back(arr[i]);
        }
      }
      arr = temp;
    }
    for(int i =0; i<arr.size(); i++) {
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}