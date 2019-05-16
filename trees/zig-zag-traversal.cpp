#include<iostream>
#include<cstdlib>
#include<stack>
#include<queue>
using namespace std;

struct BinaryTreeNode {
  int data;
  BinaryTreeNode *left, *right;
};

void emptyQueue(queue <BinaryTreeNode *> q) {
  while(q.empty() == false) {
    q.pop();
  }
}

BinaryTreeNode* createNode(int data){
  BinaryTreeNode *newNode = (BinaryTreeNode*)malloc(sizeof(BinaryTreeNode));
  if(!newNode){
    printf("memory error\n");
    return NULL;
  }
  newNode->data = data;
  newNode->left = newNode->right = NULL;
  return newNode;
}

BinaryTreeNode* InsertInBinaryTree(BinaryTreeNode *root, int data){
  queue <BinaryTreeNode *> Q;
  BinaryTreeNode *newNode = createNode(data), *temp;
  if(!newNode) {
    printf("memory error\n");
    return NULL;
  }
  if(root == NULL){
    root = newNode;
    return root;
  }
  Q.push(root);
  while (Q.empty() == false) {
    temp = Q.front();
    Q.pop();
    if(temp->left)
      Q.push(temp->left);
    else {
      temp->left = newNode;
      emptyQueue(Q);
      return root;
    }
    if(temp->right)
      Q.push(temp->right);
    else {
      temp->right = newNode;
      emptyQueue(Q);
      return root;
    }
  }
  emptyQueue(Q);
}

void inorder(BinaryTreeNode *root) {
  if (root == NULL) return;
  inorder(root->left);
  printf("%d ", root->data);
  inorder(root->right);
}

void zigzagTravesal(BinaryTreeNode *root) {
  int leftToRight = 1;
  BinaryTreeNode *temp;
  if (root == NULL) return;
  stack <BinaryTreeNode*> currentLevel, nextLevel;
  currentLevel.push(root);
  while (!currentLevel.empty()) {
    temp = currentLevel.top();
    currentLevel.pop();
    if (temp) {
      printf("%d ", temp->data);
      if (leftToRight) {
        if (temp->left) nextLevel.push(temp->left);
        if (temp->right) nextLevel.push(temp->right);
      } else {
        if (temp->right) nextLevel.push(temp->right);
        if (temp->left) nextLevel.push(temp->left);
      }
    }
    if(currentLevel.empty()) {
      leftToRight = 1 - leftToRight;
      currentLevel.swap(nextLevel);
    }
  }
}

int main () {
  int data;
  BinaryTreeNode *root = NULL;
  printf("Enter the node of the tree and press -1 to stop");
  do {
    scanf("%d", &data);
    if (data != -1) {
      root = InsertInBinaryTree(root, data);
    }
  } while(data != -1);
  printf("\nInorder of the tree\n");
  inorder(root);
  printf("\n");
  printf("Zig Zag travesal of the tree\n");
  zigzagTravesal(root);
  printf("\n");
  return 0;
}