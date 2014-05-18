/* 输入两个整数a和b，交换二者的值，然后输出 */
#include<stdio.h>
int
main (void)
{
  int a, b, t;
  //这里使用的是交换变量的三变量法
  printf("请输入两个整数：");
  scanf ("%d%d", &a, &b);
  t = a;
  a = b;
  b = t;
  printf("两个整数的前后位置被交换后的输出：");
  printf ("%d %d\n", a, b);
  return 0;
}
