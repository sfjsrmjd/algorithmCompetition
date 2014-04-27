#include<stdio.h>
int is_diff (int abc, int def, int ghi);

int
main (void)
{
  int i;
  for (i = 123; i <= 987 / 3; i++)
    {
      //printf ("\ni:%d", i);
      int abc = i;
      int def = 2 * i;
      int ghi = 3 * i;
      //printf ("-----%d:%d:%d\n", abc, def, ghi);
      if (is_diff (abc, def, ghi))
	printf ("%d:%d:%d\n", abc, def, ghi);
    }
  return 0;
}

int
is_diff (int abc, int def, int ghi)
{
  int find[10];
  int i;
  for (i = 0; i < 10; i++)
    {
      find[i] = 0;
    }
  for (i = 0; i < 3; i++)
    {
      find[abc % 10]++;
      abc /= 10;
    }
  for (i = 0; i < 3; i++)
    {
      find[def % 10]++;
      def /= 10;
    }
  for (i = 0; i < 3; i++)
    {
      find[ghi % 10]++;
      ghi /= 10;
    }
/*
  for (i = 0; i < 10; i++)
    {
      printf ("(%d:%d)", i, find[i]);
    }
*/
  if (find[0] >= 1)
    return 0;
  for (i = 1; i < 10; i++)
    {
      if (find[i] > 1)
	return 0;
      if (find[i] == 0)
	return 0;

    }
  //printf ("\n");
  return 1;
}
