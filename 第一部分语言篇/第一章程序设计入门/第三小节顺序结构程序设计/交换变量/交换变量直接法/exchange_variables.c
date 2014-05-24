#include<stdio.h>
int
main (void)
{
  int a, b;
  printf("请输入两个整数：");
  scanf ("%d%d", &a, &b);
  printf("两个整数交换位置后的输出是：");
  printf ("%d %d\n", b, a);
  return 0;
}
