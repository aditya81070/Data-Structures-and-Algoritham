#include<cstdlib>
#include<iostream>
using namespace std;

struct Node {
  int data;
  Node * next;
};


struct Node* createNode(int data) {
  Node *temp;
  temp = (Node*)malloc(sizeof(Node));
  temp->data = data;
  temp->next = NULL;

  return temp;
}

void traverse(Node *head) {
  Node *temp = head;
  if (head == NULL) {
    printf("List is empty");
  }
  while(temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

void insertAtBegin(Node **head, int data) {
  Node *temp = createNode(data);
  temp->next = *head;
  *head = temp;
}

void insertAtLast(Node * head, int data) {
  Node *temp = head;
  Node *newNode = createNode(data);
  while(temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = newNode;
}


void insertAtPosition(Node **head, int position, int data) {
  Node *temp = createNode(data);
  Node *p = *head, *q;
  int k = 1;
  if (position == 1) {
    temp->next = *head;
    *head = temp;
    } else {
      while(p!=NULL && k<position) {
        k++;
        q = p;
        p = p->next;
      }
      q->next = temp;
      temp->next = p;
    }
}


void deleteNode(Node **head, int position){
  int k = 1;
  Node *p, *q;
  if (*head == NULL) {
    printf("List is empty\n");
    return;
  }
  p = *head;

  if (position == 1) {
    *head = (*head)->next;
    free(p);
    return;
  } else {
    while(p!=NULL && k<position) {
      k++;
      q = p;
      p = p->next;
    }
    if (p == NULL) {
      printf("position does not exitst\n");
    } else {
      q->next = p->next;
      free(p);
    }
  }
}

void deleteNodeAtLast (Node **head) {
  Node *current= *head, *temp;
  if ((*head)->next == NULL) {
    printf("List is empty now\n");
    *head = NULL;
    free(*head);
    return;
  }
  while(current->next != NULL){
    temp = current;
    current = current->next;
  }
  temp->next = NULL;
  free(current);
}


void deleteLinkedlist(Node **head) {
  Node *current = *head, *temp;

  while(current) {
    temp = current;
    free(current);
    current = temp;
  }
  *head = NULL;
  printf("Linked list is deleted\n");
}

int main() {
  Node *head = createNode(5);
  traverse(head);
  //insertion at beginning
  insertAtBegin(&head, 10);
  traverse(head);
  //insertion at last
  insertAtLast(head, 15);
  traverse(head);
  // insertion at specified position
  insertAtPosition(&head, 3, 17);
  insertAtPosition(&head, 1, 1000 );
  traverse(head);
  deleteNode(&head, 5);
  traverse(head);
  deleteNodeAtLast(&head);
  traverse(head);deleteNodeAtLast(&head);
  traverse(head);deleteNodeAtLast(&head);
  traverse(head);deleteNodeAtLast(&head);
  traverse(head);
  deleteLinkedlist(&head);
  return 0;
}