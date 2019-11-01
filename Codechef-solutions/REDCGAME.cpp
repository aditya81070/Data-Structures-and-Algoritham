#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i<n; i++) {
      cin>>arr[i];
    }
    sort(arr, arr+n);
    int i;
    for(i = 0; i<n; i++) {
      if(arr[i]>k) {
        break;
      }
    }
    int temp;
    while(i<n-1) {
      if(arr[i]>k) {
        temp = arr[i] - k;
        arr[i] -=temp;
        arr[i+1] -=temp;
      }
      i++;
    }
    long int total = 0;
    for(int i = 0; i<n; i++) {
      total+=arr[i];
    }
    cout<<total<<endl;
  }
  return 0;
}