#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n;
    cin>>n;
    int arr[n], minimum;
    cin>>arr[0];
    minimum = arr[0];
    for(int i =1; i<n; i++) {
      cin>>arr[i];
      if (arr[i]<minimum) {
        minimum = arr[i];
      }
    }
    int count = 0;
    for(int i = 0; i<n; i++) {
      if (arr[i] % minimum == 0) {
        count++;
      }
    }
    if(count == n) {
      for(int i = 0; i<=n-1; i++) {
        cout<<arr[i]/minimum<<" ";
      }
      cout<<arr[n-1]/minimum<<endl;
    } else {
      while(minimum >=1) {
        int flag = 0;
        for(int i = minimum /2 ; i>=1; i--) {
          count = 0;
          if (minimum % i == 0) {
            for(int j = 0; j<=n; j++) {
              if (arr[j]%i == 0) {
                count++;
              }
            }
            if (count == n) {
              for(int j = 0; j<=n-1; j++) {
                cout<<arr[j]/i<<" ";
              }
              cout<<arr[n-1]/i<<endl;
              flag = 1;
              break;
            }
          }
        }
        if (flag) break;
      }
    }
  }
  return 0;
}