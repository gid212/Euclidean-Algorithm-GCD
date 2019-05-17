#include <stdio.h>

/* calculate gcd using euclidean algorithm */

int gcd(int a, int b)
{
  while (a != b)  // O(n)
  {
    if (a > b) a = a-b;
    else b = b-a;
  }
  return a;
}

int main(void)
{
  int a, b;
  printf("Enter first number to find the GCD: ");
  scanf("%d", &a);
  printf("Enter second number to find the GCD: ");
  scanf("%d", &b);
  printf("%d\n",gcd(a,b));
  return 0;
}
