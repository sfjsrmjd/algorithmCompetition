#include<stdio.h>
int
main (void)
{
  //int n, count = 0;
  double n;
  int count = 0;
  scanf ("%lf", &n);
  while (n > 1)
    {
      //if ((int)(n % 2) == 1)//double % int 是不允许的！
      if ((int)n % 2 == 1)
	n = n * 3 + 1;
      //987654321*3还是会使n超出int型整数的表值范围！
      //只不过n与（int）n的奇偶性相同，这也只是个猜测！

      else
	n /= 2;
      printf ("%d %.0lf\t", (int)n,n);//这里依然产生了负数，
      //但是double类型的n的数值却是正确的！
      //printf ("%d\t", (int)n);
      count++;
    }
  printf ("\n%d\n", count);
  return 0;
}
