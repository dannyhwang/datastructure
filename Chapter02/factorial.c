#include <stdio.h>

int factorial(int n)
{
  if(n<=1) return(1);
  else return (n*factorial(n-1));
}

int main(void)
{
  int i=5;
  printf("Factorial : %d\n", factorial(i));
}
