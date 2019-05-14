#include<stdio.h>
#include<cstdlib>

struct ListNode {
  int vertexNumber;
  ListNode *next;
};

struct Graph {
  int V;
  int E;
  ListNode **adj;
};


void addNodeAtLast(Graph **G, int x, int y) {
  ListNode *temp = **G->adj[x];
  ListNode *newNode = (ListNode*)malloc(sizeof(ListNode));
  newNode->vertexNumber = y;
  newNode->next = **G->adj[x];
  while(temp->next != **G->adj[x]){
    temp = temp->next;
  }
  if (temp != *G->adj[x]){
    *G->adj[x]->next = newNode;
  } else {
    temp->next = newNode;
  }
}

Graph * adjList() {
  Graph *G = (Graph*)malloc(sizeof(Graph));
  ListNode *temp;
  int i, x, y;
  if (!G){
    printf("memory error\n");
    return NULL;
  }
  printf("Enter number of vertex and edges\n");
  scanf("%d%d", &G->V, &G->E);
  G->adj = (ListNode**)malloc(G->V * sizeof(ListNode));
  for(i = 0; i<G->V; i++){
    G->adj[i] = (ListNode*)malloc(sizeof(ListNode));
    G->adj[i]->vertexNumber = i;
    G->adj[i]->next = G->adj[i];
  }

  for(i = 0; i<G->E; i++) {
    printf("enter edge\n");
    scanf("%d%d", &x, &y);
    addNodeAtLast(&G, x, y);
  }
  return G;
}

void showGraph(Graph *G) {
  for(int i = 0; i<G->V; i++){
    ListNode *temp = G->adj[i];
    do {
      if (temp->next == G->adj[i]) {
        printf("%d", temp->vertexNumber);
      } else {
        printf("%d -->",temp->vertexNumber);
      }
      temp = temp->next;
    }while(temp != G->adj[i]);
    printf("\n");
  }
}

int main(int argc, char const *argv[])
{
  Graph *G = adjList();
  showGraph(G);
  return 0;
}