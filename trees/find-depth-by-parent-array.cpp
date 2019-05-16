#include<stdio.h>

int findDepthOfGenericTree(int parent[], int n) {
  int maxDepth = -1, currentDepth = -1, j;
  for (int i = 0; i<n; i++){
    currentDepth = 0;
    j = i;
    while(parent[j] != -1) {
      currentDepth++;
      j = parent[j];
    }
    if(currentDepth > maxDepth) {
      maxDepth = currentDepth;
    }
  }
  return maxDepth;
}
int main () {
  int parent[10];
  printf("Enter the parent array. In this p[i] indicate parent of ith node\n");
  for (int i = 0 ; i<10; i++){
    scanf("%d", &parent[i]);
  }
  printf("Depth of tree %d\n", findDepthOfGenericTree(parent, 10));
  return 0;
}