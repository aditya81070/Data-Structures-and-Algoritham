#include<bits/stdc++.h>
using namespace std;

int binarySearchArr(int *arr, int low, int high, int key) {
  if(low > high) return -1;
  int mid = low + (high-low)/2;
  if (arr[mid] == key) return mid;
  if (arr[mid] > key) {
    return binarySearchArr(arr, low , mid-1, key);
  }
  return binarySearchArr(arr, mid+1, high, key);
}

int findPivot(int *arr, int low, int high) {
  if (high < low) return -1;
  if (high == low) return low;
  int mid = (low+high) / 2;
  if (high >mid && arr[mid]>arr[mid+1]) {
    return mid;
  }
  if (low < mid && arr[mid-1]>arr[mid]) {
    return mid-1;
  }
  if (arr[low]>=arr[mid]) {
    return findPivot(arr, low, mid-1);
  }
  return findPivot(arr, mid+1, high);
}

int findKey(int *arr, int n, int key) {
  int pivot = findPivot(arr, 0, n-1);
  if (pivot == -1) {
    return binarySearchArr(arr, 0, n-1, key);
  }
  if (arr[pivot] == key) {
    return pivot;
  }
  if (arr[0]<=key) {
    return binarySearchArr(arr, 0, pivot-1, key);
  }
  return binarySearchArr(arr, pivot, n-1, key);
}
int main() {
  int n, key;
  cin>>n>>key;
  int arr[n];
  for(int i = 0; i<n; i++) {
    cin>>arr[i];
  }
  int res = findKey(arr, n, key);
  if (res == -1) {
    cout<<"Element not in the array\n";
  } else {
    cout<<"Element found at index "<<res<<endl;
  }
}