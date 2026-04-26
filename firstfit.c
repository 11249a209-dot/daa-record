AIM:
To implement  the binpacking problem using firstfit algorithm to place items into bins of fixed capacity using the minimum number of  bins

ALGORITHM:
1.read the number of items n.
2.read the size of each item.
3.read the bincapacity c.
4.initialize an array bin[] to store the remaining capacity of bins
5.set bincount=0
6.for eachitem
  set placed=false
  scan all existing bins j=1 to bincount
-> if the remaining capacity of bin j>=itemsize
   place items in binj
   update remaining capacity of binj
   set placed=true
   stop scanning bins
-> if the items is not placed in any existing bin
   open a new bin
   place the item in new bin
   update remaining capacity
   increment bincount
7.display the bincapacity
8.display the total number of bins used
