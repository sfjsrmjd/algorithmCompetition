#include<stdio.h>
int
main (void)
{
  int y;
  scanf ("%d", &y);
  if (y % 100 == 0)
    {
      if (y % 400 == 0)
	{
	  printf ("yes\n");
	  printf ("%d is leap year\n", y);
	}
      else
	{
	  printf ("no\n");
	}
    }
  else
    {
      if (y % 4 == 0 && y % 100 != 0)
	{
	  printf ("yes\n");
	  printf ("%d is leap year\n", y);
	}
      else
	{
	  printf ("no\n");
	}
    }
  return 0;
}
