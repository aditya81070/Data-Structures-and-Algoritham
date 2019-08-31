#include<iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  int even=0, odd = 0, temp;
  for(int i = 0; i<n; i++) {
    cin>>temp;
    if(temp %2 == 0) even++;
    else odd++;
  }
  if (even > odd) cout<<"READY FOR BATTLE\n";
  else cout<<"NOT READY\n";
  return 0;
}