#include<stdio.h>
int
main (void)
{
  double f;
  printf("请输入一个华氏温度：");
  scanf ("%lf", &f);
  double c;
  c = 5 * (f - 32) / 9;
  printf("与这个华氏温度等价的摄氏温度是：");
  printf ("%.3lf\n", c);
  return 0;
}
