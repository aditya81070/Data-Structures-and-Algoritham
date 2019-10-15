#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    if (arr[0] == '1') {
      arr[0] = '-';
      if (arr[1] != '1') {
        arr[1] = '-';
      }
    }
    for(int i = 1; i<n; i++) {
      if (arr[i] == '1') {
        arr[i] = '-';
        arr[i-1] = '-';
        if (arr[i+1] !='1') {
          arr[i+1] = '-';
          i++;
        }
      }
    }
    int count = 0;
    for(int i =0; i<n; i++) {
      if(arr[i] == '0') count++;
    }
    cout<<count<<endl;
  }
  return 0;
}