#include<iostream>
#include<vector>
using namespace std;

void merge(vector <int> &arr, int start, int end, int mid) {
  int n1, n2, i, j, k;
  n1 = mid - start + 1;
  n2 = end - mid;
  vector <int> left, right;
  for (i=0; i<n1; i++) {
    left.push_back(arr[start+i]);
  }
  for(j=0; j<n2; j++) {
    right.push_back(arr[mid+1+j]);
  }
  i = 0;
  j=0;
  k=start;
  while(i < n1 && j < n2) {
    if (left[i]<= right[j]) {
      arr[k] = left[i];
      i++;
    } else {
      arr[k] = right[j];
      j++;
    }
    k++;
  }

  while (i <n1) {
    arr[k] = left[i];
    i++;
    k++;
  }

  while(j<n2) {
    arr[k] = right[j];
    j++;
    k++;
  }
}

void mergeSort(vector<int> &arr, int start, int end) {
  if(start < end) {
    int mid = start + (end - start)/2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, start, end, mid);
  }
}

int main () {
  int t, temp;
  scanf("%d", &t);
  vector <int> arr;
  for(int i = 0; i<t; i++) {
    scanf("%d", &temp);
    arr.push_back(temp);
  }

  mergeSort(arr, 0, t-1);
  for(int i = 0; i<t; i++) {
    printf("%d\n", arr[i]);
  }
  return 0;
}