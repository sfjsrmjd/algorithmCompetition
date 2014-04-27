#include<stdio.h>
int
main (void)
{
  double i;
  int j;
  for (i = 0, j = 0; i != 10, j < 102; i += 0.1, j++)
    {
      printf ("%d: ", j);
      //printf ("%.1lf\n", i);
      printf ("%lf\n", i);
    }
  if (10.0==10) printf("yes\n");
  else printf("no\n");
  if (10.0!=10) printf("yes\n");
  else printf("no\n");
  if (10.0>10) printf("yes\n");
  else printf("no\n");
  if (10.0<10) printf("yes\n");
  else printf("no\n");


  return 0;
}
