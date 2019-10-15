#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n;
    cin>>n;
    int arr[n], max = -1;
    for(int i = 0; i<n; i++) {
      cin>>arr[i];
      if (arr[i] > max) {
        max = arr[i];
      }
    }
    int count[max+1], temp, curCount=0, curMax = arr[0], msv = 0;
    memset(count, 0, sizeof(count));
    count[arr[0]]++;
    for(int i = 1; i<n; i++) {
      curCount = 0;
      temp = arr[i];
      for(int j = temp; j<=curMax; j+= temp) {
        // cout<<j<<" ";
        curCount += count[j];
      }
      if (curMax < temp) {
        curMax = temp;
      }
      if (curCount > msv) {
        msv = curCount;
      }
      count[temp]++;
    }
    cout<<msv<<endl;
  }
  return 0;
}