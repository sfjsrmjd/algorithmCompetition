#include<stdio.h>
#include<math.h>
int
main (void)
{
  printf ("%d\n", 1 + 2);
  printf ("%d\n", 3 - 4);
  printf ("%d\n", 5 * 6);
  printf ("%d\n", 8 / 4);
  printf ("%d\n", 8 / 5);
  printf ("%d\n", (-8) / 5);
//why there use %lf, why not use %f?
  printf ("%1lf\n", 8.0 / 5.0);
  printf ("%2lf\n", 8.0 / 5.0);
  printf ("%.1lf\n", 8.0 / 5.0);
  printf ("%.2lf\n", 8.0 / 5.0);
  printf ("%lf\n", 8.0 / 5.0);
printf("there use %%f instead of %%lf\n");
  printf ("%1f\n", 8.0 / 5.0);
  printf ("%2f\n", 8.0 / 5.0);
  printf ("%.1f\n", 8.0 / 5.0);
  printf ("%.2f\n", 8.0 / 5.0);
  printf ("%f\n", 8.0 / 5.0);

  //printf ("%.1lf\n", 8/5);//output format error
  //printf ("%d\n", 8.0/5.0);//output format error
  printf("%.8lf\n",1+2*sqrt(3)/(5-0.1));
  printf("%.8lf\n",sqrt(9.0));
  return 0;
}
