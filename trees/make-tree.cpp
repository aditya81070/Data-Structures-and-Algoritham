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

void levelOrder(BinaryTreeNode *root){
  queue <BinaryTreeNode *> q;
  BinaryTreeNode *temp;
  if(root == NULL){
    return;
  }
  q.push(root);
  while(!q.empty()) {
    temp = q.front();
    q.pop();
    printf("%d ", temp->data);

    if (temp->left) {
      q.push(temp->left);
    }
    if (temp->right) {
      q.push(temp->right);
    }
  }
}

int findMax(BinaryTreeNode *root) {
  int root_value, left, right, max = INT8_MIN;
  if (root != NULL){
    root_value = root->data;
    left = findMax(root->left);
    right = findMax(root->right);

    if (left > right) {
      max = left;
    } else {
      max = right;
    }
    if(root_value > max) {
      max = root_value;
    }
  }
  return max;
}

// TODO: fix the error
bool findInBinaryTree(BinaryTreeNode *root, int data)
{
  bool temp;
  if (root == NULL)
    return false;
  else
  {
    if (root->data == data)
    {
      return true;
    } else {
    temp = findInBinaryTree(root->left, data);
    if (!temp)
      return false;
    else
      return (findInBinaryTree(root->right, data));
    }
  }
  return false;
}

int sizeOfBinaryTree(BinaryTreeNode *root) {
  if (root == NULL) return 0;
  else return (sizeOfBinaryTree(root->left)) + 1 + (sizeOfBinaryTree(root->right));
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
  int data, temp;
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
  printf("\n----------------- LevelOrder Travesal -------------------\n");
  levelOrder(root);
  printf("\n");
  printf("\n----------------- Maximun value of the tree -------------------\n");
  printf("%d ", findMax(root));
  printf("\n Enter element to be searched");
  scanf("%d", &temp);
  if(findInBinaryTree(root, temp)) {
    printf("data is in the tree");
  } else {
    printf("data is not in the tree");
  }
  printf("\n");
  printf("\n----------------- size of the tree -------------------\n");
  printf("%d", sizeOfBinaryTree(root));
  printf("\n");
  return 0;
}