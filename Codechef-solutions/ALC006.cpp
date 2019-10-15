#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, t;
  scanf("%d%d", &n, &t);
  int arr[n];
  for(int i = 0; i<n; i++) {
    scanf("%d", &arr[i]);
  }
  int s, l,r;
  scanf("%d", &s);
  map<pair<int, int>, int> dp;
  while(s--) {
    map<int, int> type;
    map<int, int>::iterator itr;
    scanf("%d%d", &l, &r);
    if (dp.find({l,r}) != dp.end()) {
      if (dp[{l,r}] == -1) {
        cout<<"Champion\n";
      } else {
        cout<<dp[{l, r}]<<endl;
      }
      continue;
    }
    int k = r-l+1;
    for(int i = l-1; i<r; i++) {
      if (type.find(arr[i]) == type.end()) {
        type.insert(pair<int, int>(arr[i], 1));
      } else {
        type[arr[i]]++;
      }
    }
    int sum = 0, half = k/2;
    for(itr = type.begin(); itr != type.end(); itr++) {
      if (itr->second > half) {
        dp[{l, r}] = itr->first;
        printf("%d\n", itr->first);
        break;
      }
      sum += itr->second;
      if (sum > half) {
        dp[{l,r}] = -1;
        printf("Champion\n");
        break;
      }
    }
  }
  return 0;
}