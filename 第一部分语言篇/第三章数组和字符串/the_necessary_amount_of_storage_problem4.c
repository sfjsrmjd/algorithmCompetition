#include<stdio.h>
#define INF 100000
#define MAXN INF/2
int a[MAXN];
int
main (void)
{
  int x;
  int count = 0;
  int first_max = -INF;
  int second_max = -INF;
  int min = INF;
  int sum = 0;
  int na = 0;
  while (scanf ("%d", &x) == 1)
    {
      if (x > INF || x < -INF)
	{
	  printf
	    ("this program don't deal larget than %d number, this program will exit",
	     INF);
	  return 1;
	}
      if (x >= first_max)
	{
	  second_max = first_max;
	  first_max = x;
	}
      else if (x >= second_max)
	{
	  second_max = x;

	}
    }
  printf ("%d %d\n", first_max, second_max);

  return 0;
}
