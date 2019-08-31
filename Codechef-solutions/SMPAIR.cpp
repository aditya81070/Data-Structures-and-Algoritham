#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n;
    cin >> n;
    long int arr[n];
    for(int i = 0; i<n; i++) {
      cin>>arr[i];
    }
    int minIndex = 0;
    for(int i = 1; i<n; i++) {
      if (arr[minIndex] > arr[i]) {
        minIndex = i;
      }
    }
    int leftMin = minIndex-1, rightMin = minIndex +1;
    for(int i = 0; i<minIndex-1; i++) {
      if (arr[leftMin] > arr[i]) {
        leftMin = i;
      }
    }
    for(int i= minIndex +2; i<n; i++) {
      if (arr[rightMin] > arr[i]) {
        rightMin = i;
      }
    }
    int secondMin;
    if (arr[rightMin] > arr[leftMin]) {
      secondMin = leftMin;
    } else {
      secondMin = rightMin;
    }
    cout<<arr[minIndex] + arr[secondMin]<<endl;
  }
  return 0;
}