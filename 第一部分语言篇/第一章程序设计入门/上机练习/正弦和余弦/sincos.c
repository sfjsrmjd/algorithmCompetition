#include<stdio.h>
#include<math.h>
int
main (void)
{
  int n;
  printf("请输入一个正整数:");
  scanf ("%d", &n);
  const double pi = 4.0 * atan (1.0);

  double s;
  double c;
  s = sin (n * pi / 180);
  c = cos (n * pi / 180);
  printf ("sin(%d度)=%lf\n", n, s);
  printf ("cos(%d度)=%lf\n", n, c);

  return 0;
}
