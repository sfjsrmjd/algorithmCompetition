#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAXN 5000 + 10
char buf[MAXN], s[MAXN];
char max_s[MAXN][MAXN];
char max_buf[MAXN][MAXN];
char p[MAXN];
int
main ()
{
  int n, m = 0, max = 0;
  int max_i, max_j;
  int x = 0, y = 0;
  int nmax_s = 0, nmax_i;
  int nmax_buf=0,nmax_bi;
  int i, j, k;
  FILE *fin = fopen ("longest_palindrome_substring_as.in", "r");
  fgets (buf, sizeof (s), fin);
  printf ("%s", buf);		//line end have a '\n' char! either I write a newline or not!is vim add newline in the end of the file?
  fclose (fin);
  //fgets (buf, sizeof (s), stdin);
  n = strlen (buf);
  j = 0;
  for (i = 0; i < n; i++)
    if (isalpha (buf[i]))
      {
	p[m] = i;
	s[m++] = toupper (buf[i]);
      }
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

		nmax_bi = 0;
		for (k = p[i]; k <= p[j]; k++)
		  {
		    max_buf[nmax_buf][nmax_bi] = buf[k];
		    nmax_bi++;
		  }

		max_s[nmax_buf][nmax_bi] = '\0';
		nmax_buf++;

	      }
	    else if (j - i + 1 > max)
	      {
		max = j - i + 1;
		max_i = i;
		max_j = j;
		x = p[i];
		y = p[j];
		nmax_s = 0;
		nmax_i = 0;
		for (k = i; k <= j; k++)
		  {
		    max_s[nmax_s][nmax_i] = s[k];
		    nmax_i++;
		  }
		max_s[nmax_s][nmax_i] = '\0';
		nmax_s++;

		x = p[i];
		y = p[j];
		nmax_buf = 0;
		nmax_bi = 0;
		for (k = x; k <= y; k++)
		  {
		    max_buf[nmax_buf][nmax_bi] = buf[k];
		    nmax_bi++;
		  }
		max_buf[nmax_buf][nmax_bi] = '\0';
		nmax_buf++;

	      }

	  }
      }

  printf ("max = %d\n", max);
  printf ("---------------------\n");
  for (k = max_i; k <= max_j; k++)
    printf ("%c", s[k]);
  printf ("\n");
  printf ("---------------------\n");
  for (k = x; k <= y; k++)
    printf ("%c", buf[k]);
  printf ("\n");
  printf ("---------------------\n");

  for (k = 0; k < nmax_s; k++)
    printf ("%d:%s\n", k, max_s[k]);

  for (k = 0; k < nmax_s; k++)
    printf ("%d:%s\n", k, max_buf[k]);

  return 0;
}
