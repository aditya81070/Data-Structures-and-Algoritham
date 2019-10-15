#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  int arr[n+1];
  arr[0] = -1;
  for(int i =1; i<=n; i++) {
    cin>>arr[i];
  }
  vector<vector<int>>result;
  int start = 1;
  while(1) {
    int flag = 0, cur = start;
    vector<int> cycle;
    cycle.push_back(cur);
    arr[cur] = -arr[cur];
    do {
      cur = abs(arr[cur]);
      cycle.push_back(cur);
      if (cur != start) {
        arr[cur] = -arr[cur];
      }
    } while(cur != start);
    result.push_back(cycle);
    for(int i =1; i<=n; i++) {
      if (arr[i] > 0) {
        start = i;
        flag = 1;
        break;
      }
    }
    if (flag == 0) break;
  }
  cout<<result.size()<<endl;
  for(int i = 0; i<result.size(); i++) {
    for(int j = 0; j<result[i].size(); j++) {
      cout<<result[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}