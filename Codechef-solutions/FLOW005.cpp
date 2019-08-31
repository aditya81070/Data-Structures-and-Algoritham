#include<bits/stdc++.h>
using namespace std;

int main() {
  int t,amt;
  cin>>t;
  while(t--) {
    cin>>amt;
    int count=0, i100, i50, i10,i5, i2, i1;
    i100 = amt / 100;
    amt = amt - i100*100;
    i50 = amt/50;
    amt = amt - i50*50;
    i10 = amt/10;
    amt = amt - i10*10;
    i5 = amt/5;
    amt = amt - i5*5;
    i2 = amt/2;
    amt = amt - i2*2;
    i1 = amt/1;
    cout<<i100+i50+i10+i5+i2+i1<<endl;
  }
  return 0;
}