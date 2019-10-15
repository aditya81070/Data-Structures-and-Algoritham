#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n, k;
    cin>>n>>k;
    int arr[n];
    long long int sum = 0;
    for(int i =0; i<n; i++) {
      cin>>arr[i];
      sum+=arr[i];
    }
    sort(arr, arr+n);
    cout<<endl;
    long long int sum1 = 0, sum2=0, diff1, diff2;
    for(int i =0; i<k; i++) {
      sum1 += arr[i];
    }
    for(int i =n-k; i<n; i++) {
      sum2 += arr[i];
    }
    diff1 = abs(sum - 2*sum1);
    diff2 = abs(sum - 2*sum2);
    if (diff1>diff2) {
      cout<<diff1<<endl;
    } else {
      cout<<diff2<<endl;
    }
  }
  return 0;
}