#include <stdio.h>
int
main ()
{
  int a, b, c, sum;
  sum = (a = 1, b = 2, c = 3, a + b + c);
  printf ("%d", sum);

  return 0;
}