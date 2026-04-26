Algorithm 
1. Initialize a set C to be empty (this will hold our vertex cover). 
2. Mark all vertices as "not visited." 
3. Iterate through every edge (u, v) in the graph: 
4. If neither u nor v is already in the set C (both are unvisited): 
5. Add both u and v to the set C. 
6. Mark both u and v as "visited." 
7. The set C is a vertex cover that is at most twice the size of the optimal cover.
