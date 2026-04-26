Algorithm 
1. Initialize a set C to be empty (this will hold our vertex cover). 
2. Mark all vertices as "not visited." 
3. Iterate through every edge (u, v) in the graph: 
4. If neither u nor v is already in the set C (both are unvisited): 
5. Add both u and v to the set C. 
6. Mark both u and v as "visited." 
7. The set C is a vertex cover that is at most twice the size of the optimal cover.
  program:
1. #include <stdio.h> 
2. #define V 5 
  void findVertexCover(int graph[V][V]) 
{ 
  int visited[V]; 
  for (int i = 0; i < V; i++)
  { 
  visited[i] = 0; 
} 
  for (int u = 0; u < V; u++) 
  { 
  for (int v = 0; v < V; v++) 
  { 
  if (graph[u][v] == 1 && !visited[u] && !visited[v]) 
{ 
  visited[u] = 1; 
  visited[v]=0: 
    } 
} 
} 
  printf("Approximate Vertex Cover: "); 
  int count = 0; 
  for (int i = 0; i < V; i++) 
  { 
  if (visited[i]) 
{ 
  printf("%d ", i); 
  count++; 
} 
} 
  printf("\nTotal vertices in the cover: %d\n", count); 
} 
int main() 
{ 
  int graph[V][V] = { 
  {0, 1, 0, 0, 0}, 
  {1, 0, 1, 1, 0},
             {0, 1, 0, 1, 1}, 
             {0, 1, 1, 0, 1}, 
             {0, 0, 1, 1, 0}}; 
             printf("Executing Vertex Cover Approximation...\n"); 
             findVertexCover(graph);
             return 0; 
            }
