#include<stdio.h>
#include<string.h>
int
main (void)
{
  char a[20];
  char b[20];
  strcpy (a, "asa");
//strcpy(b,"asb");
  strcpy (b, "asc");
  printf ("%s\n", a);
  printf ("%d\n", strcmp (a, b));
//strcmp will return a[different]-b[different]!
  strcat (a, b);
  printf ("%s\n", a);
  return 0;
}
