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
