#include<stdio.h>
int digit (int n);
int
main (void)
{
  int a, b, c;
  //scanf ("%d%d%d", &a, &b, &c);
  a = 19, b = 6, c = 4;
  if (digit (a) >= digit (b))
    {
      printf ("%d", a / b);
    }
  a = a % b;
  printf (".");
  int i;
  for (i = 0; i <= c; i++)
    {
      //printf ("(%d)", a);
      a = a * 10;
      printf ("%d", a / b);
      a = a % b;
    }
  printf ("\n");
  return 0;
}

int
digit (int n)
{
  int count = 0;
  while (n / 10)
    {
      count++;
      n /= 10;
    }
  return count + 1;
}
