#include<stdio.h>
#define INF 100000
#define MAXN INF/2
int a[MAXN];
int
main (void)
{
  int x;
  int count = 0;
  int max = -INF;
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
      a[na] = x;
      na++;
    }
  int i, j;
  int distance = INF;
  int closest_x,closest_y;
  for (i = 0; i < na; i++)
    {
      for (j = i + 1; j < na; j++)
	{
	  int current_distance = abs (a[i] - a[j]);
	  if (current_distance < distance)
	    {
	      distance = current_distance;
              closest_x=a[i];
              closest_y=a[j];
	    }
	}
    }
  printf("%d %d\n",closest_x,closest_y);

  return 0;
}
