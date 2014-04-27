#include<stdio.h>
#define INF 100000
int
main (void)
{
  int x;
  int count = 0;
  int max = -INF;
  int min = INF;
  int sum = 0;
  while (scanf ("%d", &x) == 1)
    {
      if (x > INF || x < -INF)
	{
	  printf
	    ("this program don't deal larget than %d number, this program will exit",
	     INF);
	  return 1;
	}
      if (x > max)
	max = x;
      if (x < min)
	min = x;
      sum += x;
      count++;
    }
  printf ("The statistics number are %d\n", count);
  printf ("The maximum number is %d\n", max);
  printf ("The minimum number is %d\n", min);
  printf ("The average number is %lf\n", 1.0 * sum / count);
  return 0;
}
