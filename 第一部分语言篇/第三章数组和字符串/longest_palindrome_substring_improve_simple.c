#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAXN 5000 + 10
char buf[MAXN], s[MAXN];
char max_s[MAXN][MAXN];
int
main ()
{
  int n, m = 0, max = 0;
  int max_i, max_j;
  int nmax_s = 0, nmax_i;
  int i, j, k;
  FILE *fin = fopen ("longest_palindrome_substring_improve.in", "r");
  fgets (buf, sizeof (s), fin);
  //printf ("%s", buf);		//line end have a '\n' char! either I write a newline or not!is vim add newline in the end of the file?
  fclose (fin);
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
	if (ok)
	  {
	    if (j - i + 1 == max)
	      {
		nmax_i = 0;
		for (k = i; k <= j; k++)
		  {
		    max_s[nmax_s][nmax_i] = s[k];
		    nmax_i++;
		  }
		max_s[nmax_s][nmax_i] = '\0';

		nmax_s++;
	      }
	    else if (j - i + 1 > max)
	      {
		max = j - i + 1;
		max_i = i;
		max_j = j;
		nmax_s = 0;

		nmax_i = 0;
		for (k = i; k <= j; k++)
		  {
		    max_s[nmax_s][nmax_i] = s[k];
		    nmax_i++;
		  }
		max_s[nmax_s][nmax_i] = '\0';

		nmax_s++;
	      }

	  }
      }
  printf ("max = %d\n", max);
  for (k = 0; k < nmax_s; k++)
    printf ("%d:%s\n", k, max_s[k]);
  return 0;
}
