#include <stdio.h>
int main()
{
  int a = 0, b = 1, c, n, i;
  printf("Upto how many terms you want fibonacci series:\n");
  scanf("%d", &n);
  printf("Fibonacci series:\n");
  printf("%d\n", b);
  for (i = 2; i <= n; i++)
  {
    c = a + b;
    printf("%d\n", c);
    a = b;
    b = c;
  }
  return 0;
}