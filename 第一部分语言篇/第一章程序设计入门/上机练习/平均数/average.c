#include<stdio.h>
int
main (void)
{
  int a, b, c;
  printf("请输入三个整数：\n");
  scanf ("%d%d%d", &a, &b, &c);
  printf("它们的平均值是：（仅取三个小数位 ）");
  printf ("%.3lf\n", (a + b + c) / 3.0);
  return 0;
}
