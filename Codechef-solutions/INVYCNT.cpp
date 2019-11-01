#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i<n; i++) {
      cin>>arr[i];
    }
    long long int total = 0;
    long long int count1, count2;
    for(int i = 0; i<n; i++) {
      count1 = 0;
      count2 = 0;
      for(int j = 0; j<n; j++) {
        if (i!=j) {
          if (i<j && arr[i] > arr[j]) {
            count1++;
          } else if (i>j && arr[i] > arr[j]) {
            count2++;
          }
        }
      }
      total += (count1 * k * (k+1)/2) + (count2 * (k-1) * k /2);
    }
    cout<<total<<endl;
  }
  return 0;
}