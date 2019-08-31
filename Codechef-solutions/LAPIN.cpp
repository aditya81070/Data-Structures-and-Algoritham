#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    string str;
    cin>> str;
    int left[26], right[26], length = str.length();
    int half = length /2;
    memset(left, 0, sizeof(left));
    memset(right, 0, sizeof(right));
    if (length % 2 == 0) {
      for(int i =0; i<half; i++) {
        left[str[i] - 'a']++;
      }
      for(int i = half; i<length; i++) {
        right[str[i]-'a']++;
      }
    } else {
      for(int i =0; i<half; i++) {
        left[str[i] - 'a']++;
      }
      for(int i = half+1; i<length; i++) {
        right[str[i]-'a']++;
      }
    }
    int flag = 1;
    for(int i = 0; i<26; i++) {
      if (left[i] != right[i]) {
        flag = 0;
        break;
      }
    }
    if (flag) {
      cout<<"YES"<<endl;
    } else {
      cout<<"NO"<<endl;
    }
  }
  return 0;
}