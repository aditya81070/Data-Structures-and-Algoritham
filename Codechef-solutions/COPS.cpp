#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int m, x, y, house[101];
    memset(house, 0, sizeof(house));
    cin>>m>>x>>y;
    int cops[m], dis = x*y, left, right;
    for(int i = 0; i<m; i++) {
      cin>>cops[i];
      left = cops[i]-dis;
      right = cops[i] + dis;
      if (left <= 0) {
        left =1;
      }
      if(right > 100) {
        right = 100;
      }
      house[left]+=1;
      if (right+1<=100){
        house[right+1] -=1;
      }
    }
    for(int i = 2; i<=100; i++) {
      house[i] += house[i-1];
    }
    int count = 0;
    for(int i = 1; i<=100; i++) {
      if (house[i] == 0) {
        count++;
      }
    }
    cout<<count<<endl;
  }
  return 0;
}