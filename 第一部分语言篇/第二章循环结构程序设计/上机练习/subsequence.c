#include<stdio.h>
int
main (void)
{
  int n, m;
  scanf ("%d%d", &n, &m);
  double sum = 0.0;
  int i;
  for (i = n; i <= m; i++)
    {
      //sum += 1.0 / (i * i);//when n=65536 m=655360 , sum=inf
      //sum += (1.0 / i) * (1.0/i);//when n=65536 m=655360 , sum=0.000014
      sum += 1.0 / ((double)i*(double)i);//when n=65536 m=655360 , sum=0.000014

    }
  //printf ("%.5lf\n", sum);
  printf ("%lf\n", sum);
  return 0;
}
