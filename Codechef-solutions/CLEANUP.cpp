#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n, m, temp;
    cin>>n>>m;
    bool jobs[n+1];
    memset(jobs, false, sizeof(jobs));
    for(int i = 1; i<=m; i++) {
      cin>>temp;
      jobs[temp] = true;
    }
    int remainJobs[n-m];
    int k = 0;
    for(int i = 1; i<=n; i++){
      if (!jobs[i]) {
        remainJobs[k++] = i;
      }
    }
    for(int i = 0; i<(n-m); i+=2) {
      cout<<remainJobs[i]<<" ";
    }
    cout<<endl;
    for(int i = 1; i<(n-m); i+=2) {
      cout<<remainJobs[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}