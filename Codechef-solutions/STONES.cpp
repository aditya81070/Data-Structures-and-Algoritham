#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    string jewels, str;
    cin>>jewels;
    cin>>str;
    bool jewLow[26], jweUp[26];
    memset(jewLow, false, sizeof(jewLow));
    memset(jweUp, false, sizeof(jweUp));
    for(int i = 0; i<jewels.length(); i++) {
      if (jewels[i]>='a' && jewels[i]<= 'z') {
        jewLow[jewels[i]-'a'] = true;
      } else {
        jweUp[jewels[i] - 'A'] = true;
      }
    }
    int result = 0;
    for(int i =0; i<str.length(); i++) {
      if (str[i]>='a' && str[i]<='z'){
        if (jewLow[str[i]-'a'])result++;
      } else {
        if (jweUp[str[i]-'A'])result++;
      }
    }
    cout<<result<<endl;
  }
  return 0;
}