AIM:
To implement the travelling salesman problem using dynamic programming

ALGORITHM:
1.READ the number of cities n
2. read the cost matrix d[i][j]
3.define function
-> g(i,s)=minimum cost to start from city i,
          visit all cities in set s, and
          return to starting city
4.base condition
-> if s is empty, return d[i][0]
5.recursive case
    -> for each city k in set s,compute
    ->cost=d[i][k]+g(k,s-{k})
    ->return the minimum among all such costs
6. use memorrization (DP)table to store already computed values of g(i,s)
7.initially call 
-> g(0,s) where s contains all cities expect city 0
8.display the returned value as the minimum travelling cost.
program:
#include <stdio.h> 
2. #define MAXN 15 
3.  
4. 
7. #define INF 999999 
8.  
9. int n; 
10. int d[MAXN][MAXN]; 
11. 
13. int dp[MAXN][1 << MAXN]; 
14.  
15.  
17. int g(int i, int S) 
18. { 
19.     
20.     if (S == 0) 
21.         return d[i][0]; 
22.  
23.     
24.     if (dp[i][S] != -1)  
25.         return dp[i][S]; 
26.  
27.     int minCost = INF; 
 

24 
28.  
29.    
included in S. 
30.     
31.     for (int k = 0; k < n; k++) 
32.     { 
33.         
36.         if (S & (1 << k)) 
37.         { 
38.             
39.             int cost = d[i][k] + g(k, S & ~(1 << k)); 
40.  
41.            
42.             if (cost < minCost) 
43.             { 
44.                 minCost = cost; 
45.             } 
46.         } 
47.     } 
48.     
49.     return dp[i][S] = minCost; 
50. } 
51.  
52. int main() 
53. { 
54.     printf("Enter number of cities: "); 
55.     scanf("%d", &n); 
56.  
57.     printf("Enter cost matrix:\n"); 
58.     for (int i = 0; i < n; i++) 
59.         for (int j = 0; j < n; j++) 
60.             scanf("%d", &d[i][j]); 
61.  
62.     
64.     for (int i = 0; i < n; i++) 
65.         for (int mask = 0; mask < (1 << n); mask++) 
66.         { 
67.             dp[i][mask] = -1; 
68.         } 
69.  
70.     int S = 0; 
71.     for (int i = 1; i < n; i++) 
72.         S |= (1 << i); 
73.  
74.     int result = g(0, S); 
75.  
76.     printf("Given Cost Matrix\n"); 
77.     for (int i = 0; i < n; i++) 
78.     { 
79.          
80.         printf("|"); 
81.         for (int j = 0; j < n; j++) 
82.             printf(" %d ", d[i][j]); 
83.         printf("|\n"); 
84.     } 
85.     printf("Minimum travelling cost: %d\n", result); 
86.  
87.     return 0; 
88. }
