#include<stdio.h>
int
main (void)
{
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  int i;
  int find = 0;
  for (i = 10; i <= 100; i++)
    {
      if (i % 3 == a && i % 5 == b && i % 7 == c)
	{
	  printf ("%d\n", i);
	  find = 1;
	}
    }
  if (!find)
    {
      printf ("No answer\n");
    }
  return 0;
}
