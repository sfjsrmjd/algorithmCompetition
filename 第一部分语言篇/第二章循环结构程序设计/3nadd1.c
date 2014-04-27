#include<stdio.h>
int
main (void)
{
  int n, count = 0;
  scanf ("%d", &n);
  while (n > 1)
    {
      if (n % 2 == 1)
	n = n * 3 + 1;
      
      else
	n /= 2;
      printf ("%d\n", n);
      count++;
    }
  printf ("%d\n", count);
  return 0;
}


