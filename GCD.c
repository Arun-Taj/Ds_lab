#include <stdio.h>
int gcd(int a , int b)
{
  (b == 0 )? a : gcd(b , a%b );
}
int main()
{
  printf("Enter two numbers\n");
  int a = 0 , b = 0 ;
  scanf("%d%d" , &a,&b);
  printf("GCD of %d and %d is %d" , a,b,gcd(a,b));
  return 0;

}
