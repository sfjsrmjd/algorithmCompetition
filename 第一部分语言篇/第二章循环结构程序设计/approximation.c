#include<stdio.h>
#include<math.h>
int
main (void)
{
  double accuracy = 0.000001;
  int na = 1 / accuracy;
printf("%d\n",na);
  int n = (na - 1) / 2;
  //int n = 5;
/*
  for (i = 0; i < n; i++)
    {
      printf ("%d ", 2 * i + 1);
    }
  printf ("\n");
  for (i = 0; i < n; i++)
    {
      if (i % 2 == 0)
	printf ("%d ", 2 * i + 1);
      else
	printf ("%d ", -(2 * i + 1));
    }
  printf ("\n");

*/
  double sum = 0.0;
  int i;
  for (i = 0; i < n; i++)
    {
      if (i % 2 == 0)
	sum += 1.0 / (2 * i + 1);
      else
	sum += -1.0 / (2 * i + 1);
    }
  printf ("%lf\n", sum);
  printf ("compare to %lf\n", atan (1.0));

  return 0;
}
