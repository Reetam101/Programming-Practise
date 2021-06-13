#include <iostream>
#include <limits.h>
using namespace std;
#define V 4

int min(int a, int b) {
  if(a < b) {
    return a;
  } else
    return b;
}

void printSoln(int dist[][V]) {
  for(int i = 0; i < V; i++) {
    for(int j = 0; j < V; j++)
      cout << dist[i][j] << " ";
    cout << endl;  
  }
}

void compute(int graph[][V]) {
  int dist[V][V];

  for(int i = 0; i < V; i++) 
  {
    for(int j = 0; j < V; j++) 
    {
      dist[i][j] = graph[i][j];
    }
  }

  for(int k = 0; k < V; k++) {
    for(int i = 0; i < V; i++) {
      for(int j = 0; j < V; j++) {
        dist[i][j] = min(dist[i][j], (dist[i][k] + dist[k][j]));
      }
    }
  }

  printSoln(dist);
}


int main() {
  int INF = 999;
  int graph[V][V] = { {0, 5, INF, 10},
                      {INF, 0, 3, INF},
                      {INF, INF, 0, 1},
                      {INF, INF, INF, 0}};


  compute(graph);
  return 0;                    
}