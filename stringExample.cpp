#include<bits/stdc++.h>
using namespace std;

int main () {
  string s1, s2, s3;
  s1="aditya";
  s1.push_back('a');
  s1+="aditya";
  s1.pop_back();
  for(auto &i: s1) {
    cout<<i << " ";
  }
  getline(cin, s2);
  cout<<s2;
  cin>>s3;
  cout<<stoi(s3)<<"\n";
  return 0;
}