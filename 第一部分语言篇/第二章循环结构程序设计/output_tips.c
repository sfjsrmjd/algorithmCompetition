#include<stdio.h>
int
main (void)
{
  int i, n;
  scanf ("%d", &n);
  //for (i = 1; i <= n; i++)
//i=2 will test when n=0, i<=2*0 is not right,so nothing is being printed.
  for (i = 2; i <= 2 * n; i += 2)
    printf ("%d\n", i);
  //printf ("%d\n", i);
  return 0;
}
