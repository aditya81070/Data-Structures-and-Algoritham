#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n;
    string str;
    cin>>n;
    cin>>str;
    int yes = 0, no = 0, ind = 0;
    for(int i = 0; i<n; i++) {
      if (str[i] == 'Y') yes++;
      if (str[i] == 'N') no++;
      if (str[i] == 'I') ind++;
    }
    if (no == n) {
      cout<<"NOT SURE\n";
    } else if (yes >0 && ind > 0) {
      cout<<"NOT SURE\n";
    } else if ((yes > 0 || no > 0) && ind == 0) {
      cout<<"NOT INDIAN\n";
    } else if (yes == 0 && (ind > 0)) {
      cout<<"INDIAN\n";
    } else {
      cout<<"NOT SURE\n";
    }
  }
  return 0;
}