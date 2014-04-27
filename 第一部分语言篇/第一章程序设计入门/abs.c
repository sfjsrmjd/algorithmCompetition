#include<stdio.h>
int
main (void)
{
  double f;
  scanf ("%lf", &f);
  if (f < 0)
    f = (-f);
  printf ("%.2lf\n", f);
  return 0;
}
