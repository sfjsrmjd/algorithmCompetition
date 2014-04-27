#include<stdio.h>
#include<string.h>
#define MAXN 100+10
int a[MAXN];
int b[MAXN];
int
main (void)
{
//b=a;
  int i;
  for (i = 0; i < 5; i++)
    {
      a[i] = i;
      b[i] = 0;
    }
  for (i = 0; i < 5; i++)
    {
      printf ("%d ", a[i]);
    }
  printf ("\n");
  for (i = 0; i < 5; i++)
    {
      printf ("%d ", b[i]);
    }
  printf ("\n");

  //int k = 4;
  //memcpy (b, a, sizeof (int) * k);
  memcpy (b, a, sizeof (a));
  for (i = 0; i < 5; i++)
    {
      printf ("%d ", a[i]);
    }
  printf ("\n");
  for (i = 0; i < 5; i++)
    {
      printf ("%d ", b[i]);
    }
  printf ("\n");

  return 0;
}
