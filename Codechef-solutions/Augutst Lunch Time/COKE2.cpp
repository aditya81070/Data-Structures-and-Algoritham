#include<bits/stdc++.h>
using namespace std;

int newtemp(int ci, int k, int m) {
  for(int i = 0; i<m; i++) {
    if (k-1 <= ci && ci <= k+1) {ci = k;
    break;}
    else if (ci > k+1) ci = ci-1;
    else if (ci < k-1) ci = ci+1;
  }
  return ci;
}
bool sortcol(const vector<int>& v1,
               const vector<int>& v2 ) {
 return v1[1] < v2[1];
}
int main() {
  int t;
  cin>>t;
  while(t--) {
    int n, q, k, l, r;
    cin>>n>>q>>k>>l>>r;
    vector<vector<int>>arr(n, vector<int>(2));
    for(int i = 0; i<n; i++) {
      cin>>arr[i][0]>>arr[i][1];
    }
    sort(arr.begin(), arr.end(), sortcol);
    int temp, minPrice;
    for(int time = 1; time<=q; time++) {
      int flag = 0;
      for(int i =0; i<n; i++) {
        temp = newtemp(arr[i][0], k, time);
        if (temp >= l && temp <= r) {
          minPrice = arr[i][1];
          flag = 1;
          break;
        }
      }
      if (flag == 0) {
        cout<< -1<<" ";
      } else {
        cout<< minPrice<<" ";
      }
    }
    cout<<endl;
  }
  return 0;
}