#include<bits/stdc++.h>
using namespace std;
int sign (int v) {
  return (0<v)-(v<0);
}
int main() {
  int t;
  cin>>t;
  while(t--) {
    int a[3], c[3], b[3], d[3];
    for(int i =0; i<3; i++) {
      cin>>a[i];
    }
    for(int i =0; i<3; i++) {
      cin>>c[i];
    }
    for(int i =0; i<2; i++) {
      b[i] = a[i] - a[i+1];
    }
    b[2] = a[2] -a[0];
    for(int i =0; i<2; i++) {
      d[i] = c[i] - c[i+1];
    }
    d[2] = c[2] -c[0];
    int flag = 1;
    for(int i = 0; i<3; i++) {
      if (sign(b[i]) != sign(d[i])) {
        flag =0;
        break;
      }
    }
    if (flag) {
      cout<<"FAIR\n";
    } else {
      cout<<"NOT FAIR\n";
    }
  }
  return 0;
}