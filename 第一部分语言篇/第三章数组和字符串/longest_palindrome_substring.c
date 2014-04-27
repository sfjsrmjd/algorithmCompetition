#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAXN 5000 + 10
char buf[MAXN], s[MAXN];
int
main ()
{
  int n, m = 0, max = 0;
  int max_i, max_j;
  int i, j, k;
  FILE *fin=fopen("longest_palindrome_substring.in","r");
  fgets (buf, sizeof (s), fin);
  printf("%s",buf);//line end have a '\n' char! either I write a newline or not!is vim add newline in the end of the file?
  fclose(fin);
  //fgets (buf, sizeof (s), stdin);
  n = strlen (buf);
  for (i = 0; i < n; i++)
    if (isalpha (buf[i]))
      s[m++] = toupper (buf[i]);
  for (i = 0; i < m; i++)
    for (j = i; j < m; j++)
      {
	int ok = 1;
	for (k = i; k <= j; k++)
	  if (s[k] != s[i + j - k])
	    ok = 0;
	if (ok && j - i + 1 > max)
	  {
	    max = j - i + 1;
	    max_i = i;
	    max_j = j;
	  }
      }
  printf ("max = %d\n", max);
  for (k = max_i; k <= max_j; k++)
    printf ("%c", s[k]);
  printf ("\n");
  return 0;
}
