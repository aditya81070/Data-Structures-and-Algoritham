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
    int min = arr[0], max = arr[0], minIdx = 0, maxIdx = 0;
    for(int i = 1; i<n; i++) {
      if (min > arr[i]) {
        min = arr[i];
        minIdx = i;
      }
    }
    for(int i = 1; i<n; i++) {
      if (max < arr[i]) {
        max = arr[i];
        maxIdx = i;
      }
    }
    int diff;
    long int count =0;
    while(true) {
      diff = max - min;
      count += diff;
      for(int i =0; i<n; i++) {
        if (i != maxIdx) {
          arr[i] += diff;
        }
      }
      min = arr[0]; max = arr[0]; minIdx = 0;maxIdx = 0;
      for(int i = 1; i<n; i++) {
      if (min > arr[i]) {
        min = arr[i];
        minIdx = i;
      }
    }
    for(int i = 1; i<n; i++) {
      if (max < arr[i]) {
        max = arr[i];
        maxIdx = i;
      }
    }
      if (max == min) {
        cout<<count<<endl;
        break;
      }
    }
  }
  return 0;
}