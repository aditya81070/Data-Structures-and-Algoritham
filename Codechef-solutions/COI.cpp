#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  int arr[n], aux[n];
  for(int i =0; i<n; i++) {
    cin>>arr[i];
    aux[i] = arr[i];
  }
  int q;
  cin>>q;
  while(q--) {
    int l,r;
    unsigned long long int y, curSum = 0;
    cin>>l>>r>>y;
      int i;
      // cout<<"I reached here";
      sort(aux+l-1, aux+r);
      // for(int i = l-1; i<r; i++) {
      //   cout<<aux[i]<<" ";
      // }
      for(i = l-1; i<r; i++) {
        curSum += (unsigned long long)aux[i];
        if (curSum >= y) {
          cout<<curSum<<endl;
          break;
        }
      }
      if (i == r && curSum < y) {
        cout<< -1<<endl;
      }
      for(int i = l-1; i<r; i++) {
        aux[i] = arr[i];
      }
  }
  return 0;
}