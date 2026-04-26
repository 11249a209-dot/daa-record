Algorithm (Without Randomization) 
1. Choose the last element of the current sub-array as the Pivot. 
2. Move all elements smaller than the pivot to its left and all larger elements to its right. 
3. Repeat Step 1 & Step 2 for the left and right sub-arrays independently. 
4. If the sub-array has 1 or 0 elements then it is already sorted; STOP.

 Algorithm (With Randomization) 
1. Pick a random index k between the current low and high boundaries. 
2. Swap the element at index k with the element at the high index. 
3. Choose the last element ("randomly placed") of the current sub-array as the pivot. 
4. Move all elements smaller than the pivot to its left and all larger elements to its right. 
5. Repeat Step 1 & Step 4 for the left and right sub-arrays independently. 
6. If the sub-array has 1 or 0 elements then it is already sorted; STOP.
