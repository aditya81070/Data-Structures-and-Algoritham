#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    long long int n, k;
    scanf("%lld%lld", &n, &k);
    long long int student, teacher;
    if (k == 0) {
      cout<<0<< " "<<n<<endl;
      continue;
    } else if (n == 0) {
      cout<<0<<" "<<0<<endl;
      continue;
    }
    student = n / k;
    teacher = n % k;
    cout<<student<<" "<<teacher<<endl;
  }
  return 0;
}