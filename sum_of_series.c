#include <stdio.h>
// int main()
// {
//   int n;
//   printf("Upto how many terms you want sum of:\n");
//   scanf("%d", &n);
//   printf("The sum upto %d terms is %d.", n, (n * (n + 1) / 2));
//   return 0;
// }

//sum of series terms
// int main()
// {
//   int i, n, sum = 0;
//   printf("Upto how many terms you want sum of:\n");
//   scanf("%d", &n);
//   for (i = 1; i <= n; i++)
//   {
//     sum += i;
//   }
//   printf("The sum upto %d terms is %d.", n, sum);
//   return 0;
// }

//sum of even series terms
// int main()
// {
//   int i, n, sum = 0;
//   printf("Upto how many terms you want sum of even numbers:\n");
//   scanf("%d", &n);
//   for (i = 1; i <= n * 2; i++)
//   {
//     sum = (i % 2 == 0) ? (sum + i) : sum;
//   }
//   printf("The sum upto %d terms is %d.", n, sum);
//   return 0;
// }

//sum of odd series terms
// int main()
// {
//   int i, n, sum = 0;
//   printf("Upto how many terms you want sum of odd numbers:\n");
//   scanf("%d", &n);
//   for (i = 1; i <= n * 2; i++)
//   {
//     sum = (i % 2 != 0) ? (sum + i) : sum;
//   }
//   printf("The sum upto %d terms is %d.", n, sum);
//   return 0;
// }

//sum of fibonacci series
int main()
{
  int a = 0, b = 1, c, i, n, sum = 1;
  printf("Upto how many terms you want sum of fibonacci series:\n");
  scanf("%d", &n);
  for (i = 2; i <= n; i++)
  {
    c = a + b;
    sum += c;
    a = b;
    b = c;
  }
  printf("The sum upto %d terms is %d.", n, sum);
  return 0;
}