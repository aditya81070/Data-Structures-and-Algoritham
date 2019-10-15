#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    string feedback;
    cin>>feedback;
    size_t good1 =  feedback.find("010");
    size_t good2 = feedback.find("101");
    if (good1 != string::npos || good2 != string::npos) {
      cout<<"Good\n";
    } else {
      cout<<"Bad\n";
    }
  }
  return 0;
}