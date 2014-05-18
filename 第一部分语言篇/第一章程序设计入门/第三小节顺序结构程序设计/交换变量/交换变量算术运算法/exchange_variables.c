#include<stdio.h>
int
main (void)
{
  int a, b;
  printf("请输入两个整数，(这个程序将要交换两个整数的位置，\
然后输出它们)：");
  scanf ("%d%d", &a, &b);
//This code was wonderful, inter-related
//先让a里放入a，b之和。
  a = a + b;
//这里a-b就得到了a。
  b = a - b;
//因为a里放的是a，b之和，b里放的是原始a，
//所以a-b会得到原始b。
  a = a - b;
//这个方法通过算术的加减运算实现了交换两个变量的结果。
//很厉害！
  printf("交换后的两个变量输出如下：\n");
  printf ("%d %d\n", a, b);
  return 0;
}
