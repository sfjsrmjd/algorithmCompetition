#include<stdio.h>
int
main (void)
{
  printf ("%c%c\'\\\"\n", 'a', '\0');
  printf ("%c%c\n", '\"', '"');
  return 0;
}
