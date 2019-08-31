#include<bits/stdc++.h>
using namespace std;

int main() {
  int a, n, k;
  cin>>a>>n>>k;
  int j = 0, arr[k];
  memset(arr, 0, sizeof(arr));
  for(int i =0; i<a; i++) {
    arr[j]++;
    while(arr[j]>n && j<k) {
      arr[j+1]++;
      arr[j] = 0;
      j++;
    }
    j = 0;
  }
  for(int i =0; i<k; i++) {
    cout<<arr[i]<<" ";
  }
  return 0;
}