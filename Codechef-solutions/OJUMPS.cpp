#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
  ll a;
  cin>>a;
  if (a%3 == 0 || (a-1)%6 == 0) {
    cout<<"yes\n";
  } else {
    cout<<"no\n";
  }

  return 0;
}