#include <stdio.h>
int sum(int n)
{
  return( n == 0 ) ? 0 : n + sum(n-1);
}
int main()
{

printf("Enter a number\n");
int n = 0;
scanf("%d" , &n);

printf("Sum of first %d natural numbers is %d" , n , sum(n));
return 0;
}
