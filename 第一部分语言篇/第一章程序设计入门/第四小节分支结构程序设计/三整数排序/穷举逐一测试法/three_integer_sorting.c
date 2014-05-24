/*  三整数排序：输入三个整数，从小到大排序后输出。 */
#include<stdio.h>

int
main ()
{

  int a, b, c;

  printf ("请输入三个整数（我们将为它们排序）：");
  scanf ("%d%d%d", &a, &b, &c);

  printf ("排序后的三个整数是：");
  if (a <= b && b <= c)
    printf ("%d %d %d\n", a, b, c);

  else if (a <= c && c <= b)
    printf ("%d %d %d\n", a, c, b);

  else if (b <= a && a <= c)
    printf ("%d %d %d\n", b, a, c);

  else if (b <= c && c <= a)
    printf ("%d %d %d\n", b, c, a);

  else if (c <= a && a <= b)
    printf ("%d %d %d\n", c, a, b);

  else if (c <= b && b <= a)
    printf ("%d %d %d\n", c, b, a);

  return 0;

}
