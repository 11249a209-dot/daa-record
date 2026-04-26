AIM:
To implement tower of hanoi using recursion to move n disks from sourse to destination rod

ALGORITHM:
1. check the  Base Condition. 
2. Move Top (n−1) Disks from Source to Auxiliary
3. Move the largest disk (nth disk) to destination
4. Move (n−1) Disks from Auxiliary  to destination
5. Repeat Recursively until base condition satisfied.
program:
#include <stdio.h> 
 void towerOfHanoi(int diskNumber, char source, char destination, char auxiliary) 
     if (diskNumber == 1) 
printf("Move disk 1 from %c to %c\n", source, destination); 
      return; 
   } 
     towerOfHanoi(diskNumber - 1, source, auxiliary, destination);   
   printf("Move disk %d from %c to %c\n", diskNumber, source, destination); 
  towerOfHanoi(diskNumber - 1, auxiliary, destination, source); 
 } 
 int main() { 
int n; 
   printf("Enter number of disks: "); 
  if (scanf("%d", &n) != 1 || n <= 0) { 
      printf("Please enter a valid positive integer.\n"); 
     return 1; 
  } 
   printf("\nRequired moves:\n"); 
   towerOfHanoi(n, 'S', 'D', 'A'); 
   return 0; 
 }
