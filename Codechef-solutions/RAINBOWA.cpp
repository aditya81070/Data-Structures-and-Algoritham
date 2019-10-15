#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n;
    cin>>n;
    int arr[n], count = 0;
    for(int i = 0; i<n; i++) {
      cin>>arr[i];
      if (arr[i]>=1 && arr[i]<=7) {
        count++;
      }
    }
    if (n <13) {
      cout<<"no\n";
    } else if (count != n || arr[0] != arr[n-1] || arr[0] != 1 || arr[n-1] != 1) {
      cout<<"no\n";
    } else {
      int i = 1, j = n-2, flag = 1, inv= 0;
      while(i<=j) {
        if (arr[i]>=arr[i-1] && arr[j]>=arr[j+1] && arr[i] == arr[j]) {
          if (arr[i] >arr[i-1])inv++;
          i++;
          j--;
        } else {
          flag = 0;
          break;
        }
      }
      if(flag && inv == 6) {
        cout<<"yes\n";
      } else {
        cout<<"no\n";
      }
    }
  }
  return 0;
}