#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
 if (n%2 == 0) {
   return false;
 }
 for(int i = 3; i*i<=n; i++) {
   if (n%i == 0) {
     return false;
   }
 }
 return true;
}
int main() {
  int t;
  cin>>t;
  while(t--) {
    int x, y;
    cin>>x>>y;
    int total = x+y+1, count = 1;
    while(!isPrime(total)) {
     if (total % 2 == 0) {
       total++;
       count++;
     } else {
       total+=2;
       count+=2;
     }
    }
    cout<<count<<endl;
  }
  return 0;
}