#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int x,y,k,n;
    cin>>x>>y>>k>>n;
    int reqPages = x-y, pages, price, flag =0;
    for(int i =0; i<n; i++) {
      cin>>pages>>price;
      if(pages>=reqPages && price<=k) {
        flag =1;
      }
    }
    if(flag) {
      cout<<"LuckyChef\n";
    } else {
      cout<<"UnluckyChef\n";
    }
  }
  return 0;
}