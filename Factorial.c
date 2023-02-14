#include <stdio.h>
int factorial(int n)
{
  return (n == 0 ) ? 1 : n * factorial(n-1);
}
int main(){
printf("Enter a number\n");
int n = 0 ;
scanf("%d" ,&n);

printf("factorial of %d is %d" , n , factorial(n));
return 0;
}
