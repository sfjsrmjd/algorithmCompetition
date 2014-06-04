#include<stdio.h>
int
main (void)
{
  int y;
  printf("请输入一个年份：");
  scanf ("%d", &y);
  if (y % 100 == 0)
    {
      if (y % 400 == 0)
	{
	  //printf ("yes\n");
	  //printf ("%d is leap year\n", y);
	  printf ("%d是闰年\n", y);
	}
      else
	{
	  //printf ("no\n");
	  printf ("%d不是闰年\n", y);
	}
    }
  else
    {
      if (y % 4 == 0)
	{
	  //printf ("yes\n");
	  //printf ("%d is leap year\n", y);
	  printf ("%d是闰年\n", y);
	}
      else
	{
	  //printf ("no\n");
	  printf ("%d不是闰年\n", y);
	}
    }
  return 0;
}
