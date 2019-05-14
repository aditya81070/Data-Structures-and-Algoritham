#include <stdio.h>
#include<cstdlib>

struct Graph {
  int V;
  int E;
  int **Adj;
};

void showMatrix(Graph *G) {
  for (int i = 0; i < G->V; ++i)
  {
    for (int j = 0; j < G->V; ++j)
    {
      printf("%d ", G->Adj[i][j]);
    }
    printf("\n");
  }
}
Graph * adjMatrix() {
  int i, u, v;
  Graph *G = (Graph *)malloc(sizeof(Graph));
  printf("Enter number of vertices and edges\n");
  scanf("%d%d", &G->V, &G->E);
  printf("code run untill this\n");
  G->Adj = (int**)malloc(G->V * sizeof(int*));
  for (u = 0; u< G->V ;u++){
    G->Adj[u] = (int*)malloc(G->V * sizeof(int));
  }
  for (u = 0; u< G->V; u++)
    for(v=0; v<G->V; v++)
      G->Adj[u][v] = 0;
  for (i = 0; i<G->E;i++){
    printf("Enter an edge from u to v\n");
    scanf("%d%d", &u, &v);

    G->Adj[u][v] = 1;
    G->Adj[v][u] = 1;
  }
  return G;
}
int main(){
  Graph *G = adjMatrix();
  showMatrix(G);
  return 0;
}

