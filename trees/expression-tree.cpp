#include<iostream>
#include<stack>
#include<ios>
#include<limits>
using namespace std;

struct ExpressionNode {
  char data;
  ExpressionNode *left, *right;
};

void postorder (ExpressionNode *root) {
  if (root == NULL) return;
  postorder(root->left);
  postorder(root->right);
  printf("%c", root->data);
}

ExpressionNode* createNode(char ch) {
  ExpressionNode *newNode = (ExpressionNode*)malloc(sizeof(ExpressionNode));
  if (!newNode) {
    printf("Memory Error\n");
    return newNode;
  }
  newNode->data = ch;
  newNode->left = newNode->right = NULL;
  return newNode;
}

ExpressionNode* makeExpressionTree(char postfix[], int n) {
  stack <ExpressionNode*> st;
  ExpressionNode *temp, *T1, *T2;
  for (int i = 0; i<n; i++) {
    if (postfix[i] >= 'a' && postfix[i] <='z') {
      temp = createNode(postfix[i]);
      st.push(temp);
    } else if (postfix[i] == '+' || postfix[i] == '-' || postfix[i]== '*' || postfix[i] == '/' || postfix[i] == '%') {
      T2 = st.top(); st.pop();
      T1 = st.top(); st.pop();
      temp = createNode(postfix[i]);
      temp->left = T1;
      temp->right = T2;
      st.push(temp);
    }
  }
  temp = st.top();
  st.pop();
  if(st.empty()) {
    printf("stack is empty");
  }
  return temp;
}


int main() {
  int n;
  ExpressionNode *root = NULL;
  printf("Enter the length of postfix expression");
  scanf("%d", &n);
  char postfix[n];
  printf("\nEnter the postfix expression\n");
  cin.ignore(__INT_MAX__, '\n');
  cin.getline(postfix, n+1);
  root = makeExpressionTree(postfix, n+1);
  printf("\n");
  postorder(root);
  return 0;
}