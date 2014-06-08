#include<stdio.h>
int
main (void)
{
  int n;
  scanf ("%d", &n);
  double Hn = 0.0;
  int i;
  for (i = 1; i <= n; i++)
    {
      Hn += 1.0 / i;
    }
  printf ("%.3lf\n", Hn);
  return 0;
}
