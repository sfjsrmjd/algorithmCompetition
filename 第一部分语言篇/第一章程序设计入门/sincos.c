#include<stdio.h>
#include<math.h>
int
main (void)
{
  int n;
  scanf ("%d", &n);
  const double pi = 4.0 * atan (1.0);
  double s;
  double c;
  s = sin (n / pi / 2.0);
  c = cos (n / pi / 2.0);
  printf ("sin(%d)=%lf\n", n, s);
  printf ("cos(%d)=%lf\n", n, c);

  s = sin (n / 2.0 / pi);
  c = cos (n / 2.0 / pi);
  printf ("sin(%d)=%lf\n", n, s);
  printf ("cos(%d)=%lf\n", n, c);

  return 0;
}
