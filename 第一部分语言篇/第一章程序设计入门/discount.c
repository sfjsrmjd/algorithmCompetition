#include<stdio.h>
int
main (void)
{
  int n;
  scanf ("%d", &n);
  if (n * 95 >= 300)
    {
      printf ("%.2lf\n", n * 95 * 0.85);
    }
  else
    {
      printf ("%.2lf\n", n * 95.0);
    }
  return 0;
}
