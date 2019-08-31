#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    int a, b, c, res;
    cin>>a>>b>>c;
    if ( (a<= b && a>= c) || ( a>=b && a <=c)) {
      cout<<a<<endl;
    } else if ((b >= c && b <=a) || (b >= a && b<=c)) {
      cout<<b <<endl;
    } else {
      cout<<c<<endl;
    }
  }
  return 0;
}