#include<bits/stdc++.h>
using namespace std;

int main() {
  int n1, n2, n3;
  cin>>n1>>n2>>n3;
  vector<int>arr1(n1), arr2(n2),arr3(n3);
  for(int i = 0; i<n1; i++) {
    cin>>arr1[i];
  }
  for(int i =0;i<n2; i++) {
    cin>>arr2[i];
  }
  for(int i =0;i<n3; i++) {
    cin>>arr3[i];
  }
  vector<int>fs;
  for(int i =0; i<n1; i++) {
    if(binary_search(arr2.begin(), arr2.end(), arr1[i])) {
      fs.push_back(arr1[i]);
    }
  }
  for(int i =0; i<n1; i++) {
    if(binary_search(arr3.begin(), arr3.end(), arr1[i])) {
      fs.push_back(arr1[i]);
    }
  }
  for(int i =0; i<n2; i++) {
    if(binary_search(arr3.begin(), arr3.end(), arr2[i])) {
      fs.push_back(arr2[i]);
    }
  }
  sort(fs.begin(), fs.end());
  fs.erase(unique(fs.begin(), fs.end()), fs.end());
  cout<<fs.size()<<endl;
  for(int i =0; i<fs.size(); i++) {
    cout<<fs[i]<<endl;
  }
  return 0;
}