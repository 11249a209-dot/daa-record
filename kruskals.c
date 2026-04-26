AIM:
To implement the minimum spanning tree of a given weighted connected graph by selecting edges in increasing order of weight without forming cycles by the krushals algorithm

Kruskal’s Algorithm :

1. List all edges of the graph  
2. Sort edges in increasing order of weight  
3. Pick the smallest edge  
4. Add it to the tree  
5. Pick the next smallest edge  
6. Add it only if it does NOT form a cycle  
7. Repeat until (V − 1) edges are selected  

PROGRAM:

#include <stdio.h> 
#define V 5
