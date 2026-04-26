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
#include <stdio.h> 
 void firstFit(int items[], int n, int capacity) 
{ 
    int bin[n];       
   int binCount = 0;       
  for (int i = 0; i < n; i++) 
      bin[i] = capacity; 
  for (int i = 0; i < n; i++) 
   { 
       int placed = 0;    
       for (int j = 0; j < binCount; j++) 
       { 
            
           if (bin[j] >= items[i]) 
            { 
              bin[j] -= items[i]; 
              printf("Item %d with weight %d placed in Bin %d\n", i+1, 
items[i], j + 1); 
              placed = 1; 
             break; 
          } 
        } 
  
         
       if (!placed) 
       { 
           bin[binCount] -= items[i]; 
          printf("Item %d with weight %d placed in Bin %d\n", i+1, items[i], 
binCount + 1); 
            binCount++; 
        } 
    } 
 
    printf("Total bins used = %d\n", binCount); 
 } 
 
 int main() 
{ 
  int n, capacity; 
  
   printf("Enter number of items: "); 
    scanf("%d", &n); 
 
     printf("Enter bin capacity: "); 
     scanf("%d", &capacity); 
   int items[n]; 

   printf("Enter item sizes:\n"); 
    for (int i = 0; i < n; i++) 
    { 
         int itemSize; 
        printf("Item %d: ", i + 1); 
       scanf("%d", &itemSize); 

       if (itemSize <= capacity) 
       { 
          items[i] = itemSize; 
} 
        else 
        { 
            printf("Item size exceeds bin capacity. Please enter a valid 
size.\n"); 
            i--; 
        } 
   } 
    firstFit(items, n, capacity); 
    return 0; 
}
