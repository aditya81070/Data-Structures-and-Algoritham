#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(unsigned long long int x)
{
  return x && (!(x & (x - 1)));
}
unsigned long long int highestPowerOfTwo(unsigned long long int n)
{
  unsigned long long int p = (unsigned long long int)log2l(n);
  return (unsigned long long int )powl(2, p);
}
int main() {
  int t;
  cin>>t;
  int arr[60];
  arr[0] = 0;
  arr[1] = 1;
  for(int i = 2; i<60; i++) {
    arr[i] = (arr[i-1] + arr[i-2]) % 10;
  }
  while(t--) {
    unsigned long long int n, pw;
    scanf("%llu", &n);
    if(isPowerOfTwo(n)) {
      pw = n-1;
    } else {
      pw = highestPowerOfTwo(n-1);
      pw = pw -1;
    }
    cout<<arr[pw%60]<<endl;
  }
  return 0;
}