#include<stdio.h>
int
main (void)
{
  double f;
  printf("请输入一个浮点数:");
  scanf ("%lf", &f);
  if (f < 0)
    f = (-f);
  printf("此浮点数的绝对值是(保留两位小数）：");
  printf ("%.2lf\n", f);
  return 0;
}
