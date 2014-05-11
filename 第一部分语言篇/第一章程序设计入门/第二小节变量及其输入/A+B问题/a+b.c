#include<stdio.h>
int
main (void)
{
  int a, b;
//there need int * don't need int!
  //scanf ("%d%d", a, b);
  printf("请输入两个整数，我们将为你计算你所给出的两个整数的和。\n");
  scanf ("%d%d", &a, &b);
  printf("%d加%d的和是",a,b);
  printf ("%d\n", a + b);
  printf("谢谢使用，拜拜\n");
  return 0;
}
