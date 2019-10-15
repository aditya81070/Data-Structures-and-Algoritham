#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int k;
    cin>>k;
    int loop;
    char temp;
    if (k > 25) {
      loop = k % 25;
      if (loop > 0) {
        for(int i = loop; i>=0; i--) {
          temp = 'a' + i;
          cout<<temp;
        }
      }
        loop = k/25;
        for(int i = 0; i<loop; i++) {
          for(int i = 25; i>=0; i--) {
        temp = 'a' + i;
        cout<<temp;
      }
        }
    } else {
      for(int i = k; i>=0; i--) {
        temp = 'a' + i;
        cout<<temp;
      }
    }
    cout<<endl;
  }
  return 0;
}