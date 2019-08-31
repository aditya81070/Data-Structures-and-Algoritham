#include<bits/stdc++.h>
using namespace std;

int multiply(int n, int *arr, int m) {
  int temp, carry = 0, value;
  for(int i = 0; i<=m ; i++) {
    temp = arr[i] * n + carry;
    value = temp % 10;
    carry = temp / 10;
    arr[i] = value;
  }
  while(carry > 0) {
    m++;
    arr[m] = carry % 10;
    carry = carry / 10;
  }
  return m;
}
int main() {
  int t, n;
  cin>>t;
  while(t--) {
    int arr[20], m=0;
    arr[0] = 1;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++) {
      m = multiply(i, arr, m);
    }
    for(int i = m; i>=0; i--) {
      cout<<arr[i];
    }
    cout<<"\n";
  }
  return 0;
}