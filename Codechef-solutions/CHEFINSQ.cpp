#include<bits/stdc++.h>
using namespace std;

void findCombinations(vector<int>&arr, vector<int>&data, int start, int end, int index, int k, int curSum, int &minSum, long long int &count) {
  if (index == k) {
    count++;
    return;
  }
  for(int i = start; i<=end && end - i+1>= k-index; i++) {
    data[index] = arr[i];
    curSum += data[index];
    if (curSum > minSum) break;
      findCombinations(arr, data, i+1, end, index+1, k, curSum, minSum, count);
      curSum -= arr[i];
    // while(arr[i] == arr[i+1] && index == k) {
    //   i++;
    //   count++;
    // }
  }
}
void countPairs (vector<int> arr, int n, int k) {
  vector<int>data(k);
  int minSum = 0;
  for(int i = 0; i<k; i++) {
    minSum+=arr[i];
  }
  long long int count = 0;
  vector<int> sumSeq;
  findCombinations(arr, data, 1, n-1, 0, k, 0, minSum, count);
  cout<<count<<endl;
}
int main() {
  int t;
  cin>>t;
  while(t--) {
    int n, k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i =0; i<n; i++) {
      cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    if (n == k) {
      cout<<1<<endl;
      continue;
    } else if (k == 1) {
      int count = 1;
      for(int i = 1; i<n; i++) {
        if(arr[i] == arr[0]) count++;
      }
      cout<<count<<endl;
      continue;
    }
    countPairs(arr, n, k);
  }
  return 0;
}