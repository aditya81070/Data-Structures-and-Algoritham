#include<stdio.h>
#include<cstdlib>


struct CLLNode {
  int data;
  CLLNode *next;
};


CLLNode* crateNode(int data) {
  CLLNode *newNode = (CLLNode*)malloc(sizeof(CLLNode));
  newNode->data = data;
  newNode->next = newNode;
  return newNode;
}

void traverse(CLLNode *head) {
  CLLNode *current = head;
  if (head == NULL) {
    printf("List is empty\n");
    return;
  }
  do {
    printf("%d ", current->data);
    current = current->next;
  }while(current!=head);
  printf("\n");
}

void insertAtBegin(CLLNode **head, int data) {
  CLLNode *current = *head, *newNode = crateNode(data);
  if (*head == NULL) {
    *head = newNode;
    return;
  }
  while(current->next != *head) {
    current = current->next;
  }
  current->next = newNode;
  newNode->next = *head;
  *head = newNode;
}

void insertAtEnd(CLLNode **head, int data) {
  CLLNode *current = *head, *newNode = crateNode(data);
  if (*head == NULL) {
    *head = newNode;
    return;
  }
  newNode->next = *head;
  while(current->next != *head) {
    current = current->next;
  }
  current->next = newNode;
}

void deleteAtBegin(CLLNode **head) {
  CLLNode *current = *head, *temp = *head;
  if (*head == NULL) {
    return;
  }
  while(current->next != *head) {
    current = current->next;
  }
  *head = (*head)->next;
  current->next = *head;
  temp->next = NULL;
  free(temp);
}

void deleteAtEnd(CLLNode **head) {
  CLLNode *previosTail, *current = *head;

  if(*head == NULL) {
    return;
  }

  while(current->next != *head) {
    previosTail = current;
    current = current->next;
  }
  previosTail->next = current->next;
  current->next = NULL;
  free(current);
}

int main() {
  CLLNode *head = NULL;
  insertAtEnd(&head, 20);
  traverse(head);
  insertAtEnd(&head, 22);
  traverse(head);
  insertAtBegin(&head, 19);
  traverse(head);
  insertAtBegin(&head, 15);
  traverse(head);
   deleteAtBegin(&head);
  traverse(head);
  deleteAtEnd(&head);
  traverse(head);
  deleteAtEnd(&head);
  traverse(head);
  return 0;
}