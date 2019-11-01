#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    string str;
    cin>>str;
    int l, r, digit, upr=-1, low=-1, len = str.length(), flag = 1;
    for(int i = 0; i<len; i++) {
      if(str[i]!= '.') {
        digit = str[i] - '0';
        if (digit) {
          l = i-digit;
          r = digit + i;
          if(l < 0) {
            l = 0;
          }
          if (r >= len) {
            r = len-1;
          }
        } else {
          l = i;
          r = i;
        }
        if (upr == -1 && low == -1) {
          low = l;
          upr = r;
        } else {
          if (upr >= l) {
            flag = 0;
            break;
          }
          low = l;
          upr = r;
        }
      }
    }
    if(flag) {
      cout<<"safe\n";
    } else {
      cout<<"unsafe\n";
    }
  }
  return 0;
}