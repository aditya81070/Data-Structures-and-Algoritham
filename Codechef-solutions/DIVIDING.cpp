#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  long long int sum = 0, temp;
  for(int i =0; i<n; i++) {
    cin>>temp;
    sum+=temp;
  }
  long long int requireSum;
  if (n % 2 == 0) {
    requireSum = (long long)(n/2) * (n+1);
  } else {
    requireSum = (long long)n * ((n+1)/2);
  }
  if (requireSum == sum) {
    cout<<"YES\n";
  } else {
    cout<<"NO\n";
  }
  return 0;
}