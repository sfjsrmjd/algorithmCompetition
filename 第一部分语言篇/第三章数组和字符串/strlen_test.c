#include<stdio.h>
#include<string.h>
int
main (void)
{
  //int a[20] = { 12, 35, 298, 92, '\0' };//not work
  char a[20] = { 12, 35, 98, 92, '\0' };
  printf ("a length is %d\n", (int)strlen (a));
  return 0;
}
