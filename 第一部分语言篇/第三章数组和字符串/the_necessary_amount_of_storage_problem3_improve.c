#include<stdio.h>
#define INF 100000
#define MAXN INF/2
#define NUM 2
int a[MAXN];
int close_number[MAXN][NUM];
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
  int closest_x, closest_y;
  int close_number_i = 0;
  for (i = 0; i < na; i++)
    {
      for (j = i + 1; j < na; j++)
	{
	  int current_distance = abs (a[i] - a[j]);
	  if (current_distance == distance)
	    {
	      close_number[close_number_i][0] = a[i];
	      close_number[close_number_i][1] = a[j];
	      close_number_i++;

	    }

	  if (current_distance < distance)
	    {
	      distance = current_distance;
	      closest_x = a[i];
	      closest_y = a[j];
	      close_number_i = 0;
	      close_number[close_number_i][0] = closest_x;
	      close_number[close_number_i][1] = closest_y;
	      close_number_i++;
	    }

	}
    }

  printf ("%d %d\n", closest_x, closest_y);
  for (i = 0; i < close_number_i; i++)
    {
      printf ("%d %d\n", close_number[i][0], close_number[i][1]);
    }

  return 0;
}
