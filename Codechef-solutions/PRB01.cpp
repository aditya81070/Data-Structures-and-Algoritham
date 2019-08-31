#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n, flag = 1;
    cin >>n;
    if (n < 2) {
      cout<<"no\n";
    } else if (n == 2 || n == 3) {
      cout<<"yes\n";
    } else {
      for(int i =2; i<=sqrt(n); i++) {
        if (n % i == 0) {
          flag = 0;
          break;
        }
      }
      if (flag) {
        cout<<"yes\n";
      } else {
        cout<<"no\n";
      }
    }
  }
  return 0;
}