AIM:
To implement fractionalknapsack problem using greedymethod to obtain maximum profit by selecting items based on value_to_weight_ratio

ALGORITHM:
1.read the number of items.
2.read weight and value of each item.
3.compute value to weight ratio:
   ratio=value/weight
4.sort items in descending order of ratio
5.initialize totalprofit=0
6.for each item:
  if itemweight<=remaingcapacity
  take full item
  subract weight from capacity
  add full value to totalprofit
  else:
  take fractionalpart
  add proportional value
  ratio* ramain ing capacity
  break the loop
7.display the totalprofit
