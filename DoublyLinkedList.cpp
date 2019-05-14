#include<stdio.h>
#include <cstdlib>

struct DLLNode {
  int data;
  DLLNode *prev;
  DLLNode *next;
};

DLLNode* createNode (int data) {
  DLLNode *temp = (DLLNode*)malloc(sizeof(DLLNode));
  temp->data = data;
  temp->next = NULL;
  temp->prev = NULL;
  return temp;
}

void DLLInsertNode(DLLNode **head, int data, int position) {
  int k = 1;
  DLLNode *temp, *newNode;
  newNode = createNode(data);
  if (!newNode) {
    printf("Memory Error\n");
    return;
  }

  if(position == 1) {
    newNode->next = *head;
    newNode->prev = NULL;
    if(*head) (*head)->prev = newNode;

    *head = newNode;
    return;
  }

  temp = *head;
  while(k<position-1 && temp->next != NULL) {
    temp = temp->next;
    k++;
  }

  if (k!=position) {
    printf("position is not valid\n");
  }

  newNode->next = temp->next;
  newNode->prev = temp;
  if(temp->next) temp->next->prev = newNode;

  temp->next = newNode;
  return;
}

void traverse(DLLNode *head) {
  DLLNode *temp = head;
  if (head == NULL) {
    printf("List is empty");
  }
  while(temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

void DLLInsertNodeLast(DLLNode **head, int data) {
  DLLNode *current = *head, *newNode = createNode(data);
  if (*head == NULL) {
    *head = newNode;
    return;
  }
  while(current->next != NULL) {
    current = current->next;
  }
  newNode->prev = current;
  current->next = newNode;
}

int main () {
  DLLNode *head = NULL;
  DLLInsertNodeLast(&head, 12);
  traverse(head);DLLInsertNodeLast(&head, 20);
  traverse(head);
  DLLInsertNode(&head, 25, 2);
  traverse(head);
  return 0;
}