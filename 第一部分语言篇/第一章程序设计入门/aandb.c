#include<stdio.h>
int
main (void)
{
  int a, b;
//there need int * don't need int!
  //scanf ("%d%d", a, b);
  scanf ("%d%d", &a, &b);
  printf ("%d\n", a + b);
  return 0;
}
