#include<stdio.h>
int
main (void)
{
  int a, b, c;
  printf("请输入三角形三边长度值,且这三条边都是整数！:\n");
  scanf ("%d%d%d", &a, &b, &c);
  if (a + b > c && a + c > b && b + c > a)
    {
      if (a * a + b * b == c * c || a * a + c * c == b * b
	  || b * b + c * c == a * a)
	{
          printf("这三条边构成一个直角三角形！");
	  //printf ("yes\n");
	}
      else
	{
          printf("这三条边无法构成一个直角三角形！");
	  //printf ("no\n");
	}
    }
  else
    {
      printf("这三条边无法构成一个三角形！");
      //printf ("not a triangle\n");
    }
  return 0;
}
