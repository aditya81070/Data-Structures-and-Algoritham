#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n, m;
    cin>>n>>m;
    pair<int, int>hero1[n*m], hero2[n*m];
    int vis[n][m];
    memset(vis, 0, sizeof(vis));
    int k = 0;
    for(int i = 0; i<n; i++) {
      for(int j = 0; j<m; j++) {
        hero1[k++] = {i,j};
      }
    }
    k = 0;
    for(int j = 0; j<m; j++) {
      for(int i = 0; i<n; i++) {
        hero2[k++] = {i,j};
      }
    }
   for(int i = 1; i<=n*m; i++) {
     int res = 0;
     for(int j = 0; j<n*m; j+=i) {
       vis[hero1[j].first][hero1[j].second] = 1;
       res++;
     }
     for(int j = 0; j<n*m; j+=i) {
       if(!vis[hero2[j].first][hero2[j].second]) {
         res++;
       }
     }
     cout<<res<<" ";
    for(int j = 0; j<n*m; j+=i) {
      vis[hero1[j].first][hero1[j].second] = 0;
    }
   }
   cout<<endl;
  }
  return 0;
}