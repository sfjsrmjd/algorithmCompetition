#include<stdio.h>
int
main (void)
{
  int n;
  scanf ("%d", &n);
  int i, j;
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < 2 * n - 1; j++)
	{
	  if (j < i || j >= 2*n-1 - i)
	    {
	      printf (" ");
	    }
	  else
	    {
	      printf ("#");
	    }
	}
      printf ("\n");
    }
  return 0;
}
