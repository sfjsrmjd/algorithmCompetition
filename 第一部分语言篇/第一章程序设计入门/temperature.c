#include<stdio.h>
int
main (void)
{
  double f;
  scanf ("%lf", &f);
  double c;
  c = 5 * (f - 32) / 9;
  printf ("%.3lf\n", c);
}
