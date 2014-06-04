#include<stdio.h>
int
main (void)
{
  int n;
  printf("请输入一个整数：");
  scanf ("%d", &n);
  if (n % 2 == 0)
    {
      //printf ("yes\n");
      printf ("%d是偶数\n",n);
    }
  else
    {
      //printf ("no\n");
      printf ("%d不是偶数\n",n);
    }
  return 0;
}
