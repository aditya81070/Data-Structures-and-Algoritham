  #include<bits/stdc++.h>
  using namespace std;

  int main() {
    int a, b;
    cin>>a>>b;
    int temp = a -b;
    if (temp % 10 == 0) {
      temp +=1;
    } else {
      temp -=1;
      if (temp <= 0) {
        temp += 2;
      }
    }
    cout<<temp<<endl;
    return 0;
  }