#include<stdio.h>
int
main (void)
{
  long nc;
  nc = 0;
  //while (getchar () != EOF)
  while (fgetc (stdin) != EOF)
    ++nc;
  printf ("%ld\n", nc);
//the \n char will count in this program
  return 0;
}
