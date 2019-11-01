// rearrange array by finding an elements correct position
void reArrange(int *arr, int n) {
  for(int i = 0; i<n; i++) {
   if (arr[i] != -1 && arr[i]!=i) {
     int x = arr[i];
     while(arr[x]!=x && arr[x]!=-1) {
       int y = arr[x];
        arr[x] = x;
        x = y;
     }
      arr[x] = x;
   }
  if(arr[i]!=i) {
    arr[i] = -1;
  }
  }
}

// rearrange array by swapping arr[i] with arr[arr[i]]
// if arr[i]>=0 and arr[i]!=i, we put arr[i] and i

void reArrange(int *arr, int n) {
  int temp;
  for(int i = 0; i<n; i) {
    if (arr[i]>=0 && arr[i] !=i) {
      temp = arr[i];
      arr[i] = arr[arr[i]];
      arr[arr[i]] = temp;
    } else {
      i++;
    }
  }
}