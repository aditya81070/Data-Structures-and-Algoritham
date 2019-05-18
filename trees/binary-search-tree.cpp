#include <stdio.h>
#include <cstdlib>

struct Node {
  int data;
  Node *left, *right;
};

Node* createNode(int data) {
  Node *temp = (Node*)malloc(sizeof(Node));
  temp->data = data;
  temp->right = temp->left = NULL;
  return temp;
}

Node* insertNode(Node* root, int data) {
  Node *newNode = createNode(data);
  if (root == NULL) {
    return newNode;
  }
  if (data < root->data) {
    root->left = insertNode(root->left, data);
  } else if (data > root->data) {
    root->right = insertNode(root->right, data);
  }
  return root;
}


void preorder(Node* root) {
  if (root == NULL) return;
  printf("%d ", root->data);
  preorder(root->left);
  preorder(root->right);
}
int main () {
  Node *root = NULL;
  int data;
  printf("Enter the nodes in the binary search tree and enter -1 to stop\n");
  scanf("%d", &data);
  do {
    root = insertNode(root, data);
    scanf("%d", &data);
  } while(data != -1);
  printf("\nPre order travesal of the tree\n");
  preorder(root);
  return 0;
}