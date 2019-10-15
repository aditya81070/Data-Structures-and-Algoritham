#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  int x1, y1, x2, y2, x3, y3, count = 0;
  while(t--) {
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    int d1, d2,d3;
    d1 =(x1-x2)*(x1-x2) + (y1-y2) * (y1-y2);
    d2 =(x2-x3)*(x2-x3) + (y2-y3) * (y2-y3);
    d3 =(x1-x3)*(x1-x3) + (y1-y3) * (y1-y3);
    bool c1, c2, c3;
    c1 = d1 == d2+d3;
    c2 = d2 == d3+d1;
    c3 = d3 == d1+d2;
    if (c1 || c2 || c3) {
      count++;
    }
  }
  cout<<count<<endl;
  return 0;
}