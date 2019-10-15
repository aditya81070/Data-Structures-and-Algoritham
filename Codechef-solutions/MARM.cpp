#include<bits/stdc++.h>
using namespace std;


void manipulate(int *arr, long int n, int i) {
  int l, r;
  l = i % n;
  r = n - l - 1;
  arr[l] = arr[l] ^ arr[r];
}

void print(int *arr, int n) {
  for(int i = 0; i<n; i++) {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main() {
  int t;
  cin>>t;
  while(t--) {
    long int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i<n; i++) {
      cin>>arr[i];
    }
    long int div = k / n, rem = k % n;
    if (div && div % 3 == 0) {
      if (rem) {
        for(int i = 0; i<rem; i++) {
          manipulate(arr, n, i);
        }
      } else {
        // print(arr, n);
      }
    } else if (div == 0) {
      for(int i = 0; i<rem; i++) {
        manipulate(arr, n, i);
      }
    } else {
      int t = div % 3;
      for(int i = 0; i<t; i++) {
        for(int j = 0; j<n; j++) {
          manipulate(arr, n, j);
        }
      }
      for(int i = 0; i<rem; i++) {
        manipulate(arr, n, i);
      }
    }
    print(arr, n);
  }
  return 0;
}