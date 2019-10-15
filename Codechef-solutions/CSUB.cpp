#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n;
    cin>>n;
    char str[n+1];
    cin>>str;
    int count =0;
    for(int i =0; str[i]; i++) {
      if (str[i] == '1') {
        count++;
      }
    }
    long long int result;
    if (count % 2 == 0) {
      result = (long long)(count/2) * (count+1);
    } else {
      result = count * (long long)((count+1)/2);
    }
    cout<<result<<endl;
  }
  return 0;
}