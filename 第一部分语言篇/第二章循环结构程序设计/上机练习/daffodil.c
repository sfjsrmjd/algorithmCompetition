#include<stdio.h>
int
main (void)
{
  int i;
  for (i = 100; i <= 999; i++)
    {
      int a, b, c;
      a = i % 10;
      b = i / 10 % 10;
      c = i / 100;
      if (i == a * a + b * b + c * c)
	{
	  printf ("%d\n", i);
	}
    }
  return 0;
}
