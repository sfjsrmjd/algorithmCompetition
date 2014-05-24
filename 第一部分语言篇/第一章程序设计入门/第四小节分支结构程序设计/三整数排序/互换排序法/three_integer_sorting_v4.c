#include<stdio.h>

int
main ()
{

  int a, b, c, t;

  scanf ("%d%d%d", &a, &b, &c);

  //让a比b小
  if (a > b)
    {
      t = a;
      a = b;
      b = t;
    }

  //让a比c小
  if (a > c)
    {
      t = a;
      a = c;
      c = t;
    }

  //前两个if把a变为三个数中最大的那个！
  //让b比c小，办法是如果b比c大，那么这两个数就互换一下！
  if (b > c)
    {
      t = b;
      b = c;
      c = t;
    }

  printf ("%d %d %d\n", a, b, c);

  return 0;

}
