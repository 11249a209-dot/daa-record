AIM:
To implement a program to find the nth fibonacci term using recursion

ALGORITHM:
1.read the vaalue of n
2.if n=0,return 0(base condition)
3.if n=1,return 1(base condition)
4.recursively compute: f(n)=f(n-1)+f(n-2)
5.display the returned value as the nth fibonacci term.
  program:
  #include <stdio.h> 
  int main() 
{
  int n; 
  int a = 0, b = 1, c; 
  printf("Enter the number of terms (n): "); 
  if (scanf("%d", &n) != 1 || n < 0) 
{ 
  printf("Invalid input. Please enter a positive integer.\n"); 
  return 0; 
} 
  printf("Fibonacci Series: ");  
  if (n >= 1) 
  printf("%d ", a); 
  if (n >= 2) 
  printf("%d ", b); 
  for (int i = 3; i <= n; i++) 
  { 
  c = a + b; 
  printf("%d ", c); 
  a = b; 
  b = c; 
}  
  Otherwise, the nth term is 'b'. 
  if (n == 1)
  printf("\nFibonacci term %d = %d\n", n, a); 
else 
  printf("\nFibonacci term %d = %d\n", n, b);   
     return 0; 
}
