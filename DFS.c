// DFS using adjacency Matrix

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

void init(int N, int arr[N+1][N+1]) {
  for(int i = 0; i < N+1; i++) {
    for(int j = 0; j < N+1; j++) {
      arr[i][j] = 0;
    }
  }
}

// add edges
void addEdge(int N, int arr[N+1][N+1], int a, int b) {
  arr[a][b] = 1;
  arr[b][a] = 1;
}

void printMatrix(int N, int arr[N+1][N+1]) {
  int i, j;

  for (i = 0; i < N+1; i++) {
    printf("%d: ", i);
    for (j = 0; j < N+1; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}

void dfs(int N, int start, int arr[N+1][N+1], bool *visited) {
  printf("%d\n", start);
  visited[start] = true;

  for(int i = 0; i < N; i++) {
    if(arr[start][i] == 1 && (!visited[i])) {
      dfs(N+1, i, arr, visited);
    }
  }
}

int main() {
  int N, M;
  scanf("%d %d", &N, &M);
  int adjMatrix[N+1][N+1];  
  init(N, adjMatrix);
  for(int i = 0; i < M; i++) {
    int a, b;
    scanf("%d %d", &a, &b);

    addEdge(N, adjMatrix, a, b);
  }
  printMatrix(N, adjMatrix);

  bool *visited;
  memset(visited, false, (N+1)*sizeof(visited[0]));

  dfs(N+1, 0, adjMatrix, visited);

  return 0;
}