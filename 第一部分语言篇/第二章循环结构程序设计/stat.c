#include<stdio.h>
#define MAX 1000
int a[MAX];
int
main (void)
{
  int n;
  scanf ("%d", &n);
  if (n > MAX - 1)
    {
      printf ("%d are very large. we can't deal with\n", n);
    }
  int i;
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }
  int m;
  scanf ("%d", &m);
  int count = 0;
  for (i = 0; i < n; i++)
    {
      if (a[i] < m)
	{
	  count++;
	}
    }
  printf("%d\n",count);
  return 0;
}
