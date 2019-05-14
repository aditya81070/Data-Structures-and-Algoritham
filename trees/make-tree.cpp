#include<iostream>
#include<queue>
#include <stack>
#include<cstdlib>
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

void preorderWithStack (BinaryTreeNode *root) {
 stack <BinaryTreeNode* > st;
 while(1){
   while(root){
     printf("%d ", root->data);
     st.push(root);
     root = root->left;
   }

   if(st.empty()){
     break;
   }
   root = st.top();
   st.pop();
   root = root->right;
 }
}
void preorder(BinaryTreeNode *root) {
  if(root == NULL) return;
  printf("%d ", root->data);
  preorder(root->left);
  preorder(root->right);
}

void inorderWithStack(BinaryTreeNode *root){
  stack <BinaryTreeNode*> st;
  while(1){
    while(root){
      st.push(root);
      root = root->left;
    }

    if(st.empty()){
      break;
    }
    root = st.top();
    st.pop();
    printf("%d ", root->data);
    root = root->right;
  }
}

void inorder(BinaryTreeNode *root) {
  if(root == NULL) return;
  inorder(root->left);
  printf("%d ", root->data);
  inorder(root->right);
}

void postorderWithStack (BinaryTreeNode *root) {
  stack <BinaryTreeNode *> st;
  BinaryTreeNode *previous = NULL;
  while(1){
    while(root){
      st.push(root);
      root = root->left;
    }
    while(root == NULL && !st.empty()){
      root = st.top();
      if (root->right == NULL || root->right == previous){
        printf("%d ", root->data);
        st.pop();
        previous = root;
        root = NULL;
      } else {
        root = root->right;
      }
    }
    if(st.empty())
      break;
  }
}
void postorder(BinaryTreeNode *root){
  if(root == NULL) return;
  postorder(root->left);
  postorder(root->right);
  printf("%d ", root->data);
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

int main() {
  int data;
  BinaryTreeNode *root = NULL;
  do {
    printf("Enter the data you want to insert or -1 to stop\n");
    scanf("%d", &data);
    if (data != -1){
      root = InsertInBinaryTree(root, data);
    }
  } while(data != -1);
  printf("\n----------------- Preorder Travesal -------------------\n");
  preorder(root);
  printf("\n");
  printf("\n----------------- PreorderStack Travesal -------------------\n");
  preorderWithStack(root);
  printf("\n");
  printf("\n----------------- Inorder Travesal -------------------\n");
  inorder(root);
  printf("\n");
  printf("\n----------------- InorderStack Travesal -------------------\n");
  inorderWithStack(root);
  printf("\n");
  printf("\n----------------- PostOrder Travesal -------------------\n");
  postorder(root);
  printf("\n");
  printf("\n----------------- PostOrderStack Travesal -------------------\n");
  postorderWithStack(root);
  printf("\n");
  return 0;
}