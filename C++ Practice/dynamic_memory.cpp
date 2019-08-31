#include<iostream>
#include<cstring>
#define maxSize 1000000001
using namespace std;

int main () {
  int *arr = new(nothrow) int[maxSize];
  if(!arr) {
    cout<<"Sorry, Can't allocate memory";
  } else {
    long int count = 0;
    memset(arr, 0, sizeof(arr));
    for(long int i = 0; i< maxSize; i++) {
      if (arr[i] == 0) {
        count++;
      }
    }
    delete[] arr;
    cout<<arr;
  cout<<count;
  }
  return 0;
}