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

void inorder(Node* root) {
  if (root == NULL) return;
  inorder(root->left);
  printf("%d ", root->data);
  inorder(root->right);
}

Node* findInBST(Node* root, int data) {
  if (root == NULL) return root;
  if (root-> data < data) return findInBST(root->right, data);
  if (root->data > data) return findInBST(root->left, data);
  return root;
}


void findSucPre(Node *root, Node* &pre, Node *&suc, int key) {
  if (root == NULL) return;

  if (root->data == key) {
    if (root->left) {
      Node *temp = root->left;
      while(temp->right) {
        temp = temp->right;
      }
      pre = temp;
    }

    if (root->right) {
      Node *temp = root->right;
      while(temp->left) {
        temp = temp->left;
      }
      suc = temp;
    }
    return;
  }

  if (root->data > key) {
    suc = root;
    findSucPre(root->left, pre, suc, key);
  } else {
    pre = root;
    findSucPre(root->right, pre, suc, key);
  }
}

int main () {
  Node *root = NULL, *tempNode, *pre, *suc;
  int temp;
  for (int i = 1; i <= 10; i++) {
    root = insertNode(root, i);
  }
  printf("\nPreorder travesal of the tree\n");
  preorder(root);
  printf("\nInorder travesal of the tree\n");
  inorder(root);
  printf("\nenter element to be find in the tree\n");
  scanf("%d", &temp);
  tempNode = findInBST(root,temp);
  if (tempNode == NULL) {
    printf("item not in the tree\n");
  } else {
    printf("item present\n");
  }
  printf("Enter an element to find the inorder predecessor and successor\n");
  scanf("%d", &temp);
  findSucPre(root, pre, suc, temp);
  printf("inorder predecessor and successor is %d and %d\n",pre->data, suc->data);
  return 0;
}