#include<bits/stdc++.h>
using namespace std;

void compManipulate(int *arr, int n) {
  int rem = n/2, a, b, temp, idx;
  for(int i = 0; i<rem; i++) {
    idx = i % n;
    a = arr[idx];
    b = arr[n-1-idx];
    temp = a;
    arr[idx] = a ^ b;
    arr[n-1-idx] = temp;
  }
}
int main() {
  int t;
  cin>>t;
  while(t--) {
    long int k,a,b, temp, n;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i<n; i++) {
      cin>>arr[i];
    }
    long int div = k / n, rem = k % n;
    if (div) {
      if (n%2 !=0) {
        arr[n/2] = 0;
      }
      if (div % 3 == 0) {
      } else {
        div = div % 3;
        for(long int i = 0; i<div; i++) {
          compManipulate(arr, n);
        }
      }
    }
    for(int i = 0; i<rem; i++) {
      temp = i % n;
      a = arr[temp];
      b = arr[n - temp-1];
      arr[temp] = a ^ b;
    }
    for(int i = 0; i<n; i++) {
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}