#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    int n, m, q, x, y;
    scanf("%d%d%d", &n, &m, &q);
    int rows[n], col[m];
    memset(rows, 0, sizeof(rows));
    memset(col, 0, sizeof(col));
    while(q--) {
      scanf("%d%d", &x, &y);
      rows[x-1]++;
      col[y-1]++;
    }
    long int count = 0;
    int rowOdd = 0, colOdd = 0;
    for(int i = 0; i<n; i++) {
      if(rows[i] &1) rowOdd++;
    }
    for(int i = 0; i<m; i++) {
      if (col[i] & 1) colOdd++;
    }
    count = (n-rowOdd) *(long) colOdd + (m-colOdd) * (long)rowOdd;
    cout<<count<<endl;
  }
  return 0;
}