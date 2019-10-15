#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n;
    cin>>n;
    int arr[n+1];
    cin>>arr[1];
    int min = arr[1], count = 1;
    for(int i = 2; i<=5; i++) {
      cin>>arr[i];
      if (arr[i] <min){
        count++;
        min = arr[i];
      }
    }
    for(int i = 6; i<=n; i++) {
      cin>>arr[i];
      int curMin = 751;
      for(int j = i-1; j>= i-5; j--) {
        if (arr[j] < curMin) {
          curMin = arr[j];
        }
      }
      if (curMin > arr[i]) {
        count++;
      }
    }
    cout<<count<<endl;
  }
  return 0;
}