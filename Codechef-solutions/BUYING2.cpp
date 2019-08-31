#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n, x;
    cin>>n>>x;
    int arr[n], totalAmount=0;
    for(int i =0; i<n; i++) {
      cin>>arr[i];
      totalAmount+=arr[i];
    }
    int maxCount = totalAmount / x;
    if (totalAmount %x == 0) {
      cout<<maxCount<<endl;
    } else {
      int flag = 1, temp;
      for(int i =0; i<n; i++) {
        temp = (totalAmount-arr[i]) / x;
        if (temp == maxCount) {
          flag = 0;
          break;
        }
      }
      if (flag) {
        cout<<maxCount<<endl;
      } else {
        cout<< -1 <<endl;
      }
    }
  }
  return 0;
}