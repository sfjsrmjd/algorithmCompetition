#include<stdio.h>
int
main (void)
{
  //int n, count = 0;
  double n;
  int count = 0;
  scanf ("%lf", &n);
  while (n > 1)
    {
      if ((int)n % 2 == 1)
	n = n * 3 + 1;

      else
	n /= 2;
      printf ("%d %lf\n", (int)n,n);
      count++;
    }
  printf ("%d\n", count);
  return 0;
}
