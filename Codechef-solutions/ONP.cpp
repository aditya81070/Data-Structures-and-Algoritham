#include<bits/stdc++.h>
using namespace std;

int preced(char c) {
  if (c == '^') return 3;
  else if (c == '*' || c== '/') return 2;
  else if( c== '+' || c== '-') return 1;
  else return -1;
}
int main() {
  int t;
  cin>>t;
  while(t--) {
    string str, result = "";
    cin>>str;
    stack<char> st;
    st.push('N');
    char c;
    for(int i = 0; i< str.length(); i++) {
      if (str[i] >='a' && str[i] <='z') {
        result += str[i];
      } else if (str[i] == '(') {
        st.push('(');
      } else if (str[i] == ')') {
        while(st.top() != 'N' && st.top() != '(') {
          c = st.top();
          st.pop();
          result+=c;
        }
        if(st.top() == '(') {
          st.pop();
        }
      } else {
        while(st.top() != 'N' && preced(st.top()) >= preced(str[i])) {
          c = st.top();
          st.pop();
          result +=c;
        }
        st.push(str[i]);
      }
    }
    while(st.top()!='N') {
      c = st.top();
      st.pop();
      result +=c;
    }
    cout<<result<<endl;
  }
  return 0;
}