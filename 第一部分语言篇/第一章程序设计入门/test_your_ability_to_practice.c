#include<stdio.h>
int
main (void)
{
//question 1
  printf ("7:%d\n", 1000000);
  printf ("8:%d\n", 10000000);
  printf ("9:%d\n", 100000000);
  printf ("10:%d\n", 1000000000);
  //printf ("11:%d\n", 10000000000);
  printf ("10:%d\n", 1500000000);
  printf ("10:%d\n", 1750000000);

  int x=1;
  int y=2;
  //int a=1; int b=1;
  int a=0; int b=1;
  if (a)
    if (b)
      x++;
    else
      y++;
  printf("x=%d y=%d\n",x,y);
  x=1;y=2;
  if (a)
    {
      if (b)
	{
	  x++;
	}
      else
	{
	  y++;
	}
    }
  printf("x=%d y=%d\n",x,y);
  return 0;
}
