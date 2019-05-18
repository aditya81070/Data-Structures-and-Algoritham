#include<stdio.h>
#include<cstdlib>

struct Node {
  int data;
  Node *left, *right;
};

Node* createNode(int data) {
  Node *newNode = (Node*)malloc(sizeof(Node));
  newNode->data = data;
  newNode->left = newNode->right = NULL;
  return newNode;
}

void inorder(Node *root) {
  if (root == NULL) return;
  inorder(root->left);
  printf("%d ", root->data);
  inorder(root->right);
}

Node *createBST(int arr[], int left, int right) {
  int mid;
  Node *newNode;
  if (left > right) return NULL;

  if(left == right) {
    newNode = createNode(arr[left]);
  }
  if (left < right) {
    mid = left + (right-left)/2;
    newNode = createNode(arr[mid]);
    newNode->left = createBST(arr, left, mid-1);
    newNode->right = createBST(arr, mid+1, right);
  }
  return newNode;
}

int main() {
  int n;
  Node *root;
  printf("Enter number of nodes in the tree");
  scanf("%d", &n);
  int arr[n];
  printf("enter the elements of the array in sorted order\n");
  for(int i = 0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  root = createBST(arr, 0, n-1);
  printf("inorder travesal of the tree formed is\n");
  inorder(root);
  printf("\n");
  return 0;
}