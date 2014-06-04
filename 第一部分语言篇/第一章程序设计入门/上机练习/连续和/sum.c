#include<stdio.h>
int
main (void)
{
  int n;
  printf("请输入一个正整数:");
  scanf ("%d", &n);
  printf("1+2+...+%d的值是:",n);
  printf ("%d\n", n * (n + 1) / 2);
  return 0;
}
