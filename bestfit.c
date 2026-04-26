AIM:
To implement the binpacking problem  using bestfit  to place each item into the bin with the smallest remaining capacity that can accommadateit,thereby minimizing the number of bins used.

ALGORITHM:
1.read the number of items n.
2.read the size of each item.
3.read the bincapacity c.
4.initialize an array bin[] of size n with capacity value c
5.set bincount=0
6.for eachitem i=1to n 
  set best index=-1
  set minspace= c+1
  scan all existing bins j=1 to bincount
->if items fits in binj:
  compute remaingspace after placement
  if this remaining space is less than minspace:
      update bestindex =j
      update minspace
after scanning all bins:
->if bestindex noteqeal to -1
   place items in bin bestindex
   update remaining capacity 
-> if the items is not placed in any existing bin
   open a new bin
   place the item in new bin
   update remaining capacity
   increment bincount
7.display the bincapacity
8.display the total number of bins used.
