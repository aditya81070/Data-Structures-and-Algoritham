#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n, k;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++) {
      cin>>arr[i];
    }
    cin>>k;
    int songLen = arr[k-1], pos = 0;
    for(int i=0; i<n; i++) {
      if (arr[i]<songLen) {
        pos++;
      }
    }
    cout<<pos+1<<endl;
  }
  return 0;
}