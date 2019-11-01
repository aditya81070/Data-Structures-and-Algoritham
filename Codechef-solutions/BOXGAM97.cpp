#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n, k, p;
    cin>>n>>k>>p;
    int arr[n];
    for(int i =0; i<n; i++) {
      cin>>arr[i];
    }
    int result;
    // maximum
    if (p == 0) {
      int maxIdx = 0;
      vector<int> maxElems;
      for(int i = 1; i<n; i++) {
        if (arr[maxIdx] <= arr[i]) {
          maxIdx = i;
          maxElems.push_back(maxIdx);
        }
      }
      if (arr[maxIdx] == arr[0]) {
        maxElems.push_back(0);
      }
      int temp, curMax = -1;
       maxIdx = maxElems[0];
      for(auto e: maxElems) {
        if (e == 0) {
          if (arr[e+1] > curMax) {
            curMax = arr[e+1];
            maxIdx = e;
          }
        } else if (e == n-1) {
          if (arr[e-1] > curMax) {
            curMax = arr[e-1];
            maxIdx = e;
          }
        } else {
          if (arr[e-1] < arr[e+1]) {
            if (arr[e+1] > curMax) {
              curMax = arr[e+1];
              maxIdx = e;
            }
          } else {
            if (arr[e-1] > curMax) {
              curMax = arr[e-1];
              maxIdx = e;
            }
          }
        }
      }
      if (k%2 !=0) {
        result = arr[maxIdx];
      } else {
        if (maxIdx-1 <0) {
          result = arr[maxIdx+1];
        } else if (maxIdx + 1>=n) {
          result = arr[maxIdx-1];
        } else {
          if (arr[maxIdx -1]>arr[maxIdx+1]) {
            result = arr[maxIdx+1];
          } else {
            result = arr[maxIdx -1];
          }
        }
      }
    } else {
       int minIdx = 0;
      vector<int> minElems;
      for(int i = 1; i<n; i++) {
        if (arr[minIdx] >= arr[i]) {
          minIdx = i;
          minElems.push_back(minIdx);
        }
      }
      if (arr[minIdx] == arr[0]) {
        minElems.push_back(0);
      }
      int temp, curMin = INT_MAX;
       minIdx = minElems[0];
      for(auto e: minElems) {
        if (e == 0) {
          if (arr[e+1] < curMin) {
            curMin = arr[e+1];
            minIdx = e;
          }
        } else if (e == n-1) {
          if (arr[e-1] < curMin) {
            curMin = arr[e-1];
            minIdx = e;
          }
        } else {
          if (arr[e-1] < arr[e+1]) {
            if (arr[e-1] < curMin) {
              curMin = arr[e-1];
              minIdx = e;
            }
          } else {
            if (arr[e+1] < curMin) {
              curMin = arr[e+1];
              minIdx = e;
            }
          }
        }
      }
      if (k%2 !=0) {
        result = arr[minIdx];
      } else {
        if (minIdx-1 <0) {
          result = arr[minIdx+1];
        } else if (minIdx + 1>=n) {
          result = arr[minIdx-1];
        } else {
          if (arr[minIdx -1]>arr[minIdx+1]) {
            result = arr[minIdx-1];
          } else {
            result = arr[minIdx +1];
          }
        }
      }
    }
    cout<<result<<endl;
  }
  return 0;
}