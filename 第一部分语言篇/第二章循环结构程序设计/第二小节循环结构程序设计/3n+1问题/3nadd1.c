#include<stdio.h>
int
main (void)
{
  //题目要求对n<=10^9成立
  //n=987654321时，count是1,得到了错误结果。
  //原因是3*987654321超出了int型整数的表值范围！
  int n, count = 0;
  scanf ("%d", &n);
  while (n > 1)
    {
      if (n % 2 == 1)
	n = n * 3 + 1;
      
      else
	n /= 2;
      printf ("%d\t", n);
      count++;
    }
  printf ("\n%d\n", count);
  return 0;
}
