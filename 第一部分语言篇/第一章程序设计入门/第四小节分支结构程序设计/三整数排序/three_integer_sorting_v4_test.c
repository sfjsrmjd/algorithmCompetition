#include<stdio.h>

int
main ()
{

  int a, b, c, t;

  scanf ("%d%d%d", &a, &b, &c);

  if (a > b)
    {
      t = a;
      a = b;
      b = t;
    }

  if (b > c)
    {
      t = b;
      b = c;
      c = t;
    }

  if (a > c)
    {
      t = a;
      a = c;
      c = t;
    }

  printf ("%d %d %d\n", a, b, c);
  //2 3 1 will get 2 1 3

  return 0;

}
