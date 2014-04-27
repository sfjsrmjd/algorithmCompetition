#include<stdio.h>
int
main (void)
{
  int a, b, t;
  //scanf ("%d  %d", &a, &b);//Does not affect the input variables to obtain
  //scanf ("%d %d", &a, &b);
  scanf ("%d%d", &a, &b);
  t = a;
  a = b;
  b = t;
  printf ("%d %d\n", a, b);
  return 0;
}
