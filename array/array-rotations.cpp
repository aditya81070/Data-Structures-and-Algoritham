#include<bits/stdc++.h>
using namespace std;
/*
  Time Complexity: O(n)
*/
void reverseArray(int *arr, int start, int end) {
  int temp;
  while(start < end) {
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
/*
  Time Complexity: O(n)
*/
void leftRotateArrRevAlgo(int *arr, int n, int d) {
  if (d==0) {
    return;
  }
  reverseArray(arr, 0, d-1);
  reverseArray(arr, d, n-1);
  reverseArray(arr, 0, n-1);
}
/*
  Time Complexity: O(n)
*/
void leftRotateArrJuggling(int *arr, int n, int d) {
  int g_c_d = __gcd(n,d);
  for(int i = 0; i<g_c_d; i++) {
    int temp = arr[i];
    int j = i;
    while(1) {
      int k = j+d;
      if (k>=n) {
        k = k-n;
      }
      if (k==i) {
        break;
      }
      arr[j] = arr[k];
      j = k;
    }
    arr[j] = temp;
  }
}
int main() {
  int n,d;
  cin>>n>>d;
  int arr[n];
  for(int i = 0; i<n; i++) {
    cin>>arr[i];
  }
  d = d % n;
  leftRotateArrRevAlgo(arr, n,d);
  for(int i = 0; i<n; i++) {
    cout<<arr[i]<<" ";
  }
  return 0;
}