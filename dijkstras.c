AIM:
To implement the shortest path algoritm usind dijkstras 

ALGORITHM:
1. Initialize a dist array where dist[source] = 0 and all others are ∞. 
2. Maintain a set of unvisited vertices. 
3. While there are unvisited vertices: 
o Select the vertex u with the minimum dist[u]. 
o For each neighbor v of u:  
▪ If dist[u] + weight(u, v) < dist[v]:  
▪ Update dist[v] (Relaxation).
