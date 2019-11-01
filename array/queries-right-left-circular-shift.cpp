#include<bits/stdc++.h>
using namespace std;

void queryType1(int &toRotate, int times, int n) {
  toRotate = (toRotate-times) % n;
}

void queryType2(int &toRotate, int times, int n) {
  toRotate = (toRotate + times) % n;
}

void queryType3(int toRotate, int l, int r, int *preSum, int n) {
  l = (l+toRotate+n)%n;
  r = (r+toRotate+n) %n;
  if (l<=r) {
    cout<<preSum[r+1]-preSum[l]<<endl;
  } else {
    cout<<preSum[n]+preSum[r+1]-preSum[l]<<endl;
  }
}
void ansQueries(int *arr, int n, int q) {
  int preSum [n+1];
  preSum[0] = 0;
  for(int i = 1; i<n+1; i++) {
    preSum[i] = preSum[i-1] + arr[i-1];
  }
  int toRotate = 0;
  int cmd, times;
  while(q--) {
    cin>>cmd;
    switch(cmd) {
      case 1:
        cin>>times;
        queryType1(toRotate, times, n);
        break;
      case 3: int l, r;
        cin>>l>>r;
        queryType3(toRotate, l, r, preSum, n);
        break;
      case 2:
        cin>>times;
        queryType2(toRotate, times, n);
    }
  }
}
int main() {
  int n,q;
  cin>>n>>q;
  int arr[n];
  for(int i = 0; i<n; i++) {
    cin>>arr[i];
  }
  ansQueries(arr, n, q);
  return 0;
}