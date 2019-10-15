#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n, temp;
    cin>>n;
    set<int> arr;
    for(int i =0; i<n; i++) {
      cin>>temp;
      arr.insert(temp);
    }
    cout<<arr.size()<<endl;
  }
  return 0;
}