#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int hardness, tensile, grade;
    double carbon;
    cin>>hardness>>carbon>>tensile;
    bool c1 = hardness > 50;
    bool c2 = carbon < 0.7;
    bool c3 = tensile > 5600;
    if (c1 && c2 && c3) {
      grade = 10;
    } else if (c1 && c2) {
      grade = 9;
    } else if (c2 && c3) {
      grade = 8;
    } else if (c1 && c3) {
      grade = 7;
    } else if (c1 || c2 || c3) {
      grade = 6;
    } else {
      grade = 5;
    }
    cout<<grade<<endl;
  }
  return 0;
}