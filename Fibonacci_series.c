#include <stdio.h>
int fibonacci(int n)
{
  return (n < 2 ) ? n : fibonacci(n-1) + fibonacci(n -2);
}
int main()
{
  printf("Enter a number\n");
  int n = 0 ;
  scanf("%d" , &n);
  printf("%d fibonacci terms are :\n", n);
  int i;
  for(i = 0 ; i < n ; ++i)
  {
    printf("%d\t" , fibonacci(i));

  }
  return 0;

}
