#include<stdio.h>
int
main (void)
{
  int n;
  scanf ("%d", &n);
  int count = 0;
  while (n / 10)
    {
      count++;
      n /= 10;
    }
  printf ("%d\n", count + 1);
  return 0;
}
