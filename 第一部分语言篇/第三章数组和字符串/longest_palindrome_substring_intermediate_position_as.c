#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAXN 5000 + 10
char buf[MAXN], s[MAXN];
int p[MAXN];

char max_s[MAXN][MAXN];
char max_buf[MAXN][MAXN];

int
main ()
{
  int n, m = 0, max = 0, x, y;
  int i, j,k;
  //FILE *fin = fopen ("longest_palindrome_substring_intermediate_position_as.in",
  FILE *fin = fopen ("longest_palindrome_substring_intermediate_position_as.in.2",
  //FILE *fin = fopen ("longest_palindrome_substring_as.in",
		     "r");
  fgets (buf, sizeof (s), fin);
  fclose (fin);

  n = strlen (buf);
  for (i = 0; i < n; i++)
    if (isalpha (buf[i]))
      {
	p[m] = i;
	s[m++] = toupper (buf[i]);
      }

  int nmax_s, nmax_si;
  int nmax_buf, nmax_bufi;
  for (i = 0; i < m; i++)
    {
      for (j = 0; i - j >= 0 && i + j < m; j++)
	{
	  if (s[i - j] != s[i + j])
	    break;
	  if (j * 2 + 1 == max)
	    {
//copy current same length padlindrome substring into max_s 2d array!
	      nmax_si = 0;
              
	      for (k = i - j; k <= i + j; k++)
		{
		  max_s[nmax_s][nmax_si] = s[k];
		  nmax_si++;
		}
	      max_s[nmax_s][nmax_si] = '\0';
	      nmax_s++;

	      nmax_bufi = 0;
	      for (k = p[i - j]; k <= p[i + j]; k++)
		{
		  max_buf[nmax_buf][nmax_bufi] = buf[k];
		  nmax_bufi++;
		}
	      max_buf[nmax_buf][nmax_bufi] = '\0';
	      nmax_buf++;
	    }
	  else if (j * 2 + 1 > max)
	    {
	      max = j * 2 + 1;
	      x = p[i - j];
	      y = p[i + j];

	      nmax_s = 0;
	      nmax_si = 0;
	      for (k = i - j; k <= i + j; k++)
		{
		  max_s[nmax_s][nmax_si] = s[k];
		  nmax_si++;
		}
	      max_s[nmax_s][nmax_si] = '\0';
	      nmax_s++;

	      nmax_bufi = 0;
	      nmax_buf = 0;
	      for (k = p[i - j]; k <= p[i + j]; k++)
		{
		  max_buf[nmax_buf][nmax_bufi] = buf[k];
		  nmax_bufi++;
		}
	      max_buf[nmax_buf][nmax_bufi] = '\0';
	      nmax_buf++;

	    }
	}
/*
      for (j = x; j <= y; j++)
	printf ("%c", buf[j]);
      printf ("\n");
*/

      for (j = 0; i - j >= 0 && i + j + 1 < m; j++)
	{
	  if (s[i - j] != s[i + j + 1])
	    break;
	  if (j * 2 + 2 == max)
	    {
	      nmax_si = 0;
	      for (k = i - j; k <= i + j + 1; k++)
		{
		  max_s[nmax_s][nmax_si] = s[k];
		  nmax_si++;
		}
	      max_s[nmax_s][nmax_si] = '\0';
	      nmax_s++;

	      nmax_bufi = 0;
	      for (k = p[i - j]; k <= p[i + j + 1]; k++)
		{
		  max_buf[nmax_buf][nmax_bufi] = buf[k];
		  nmax_bufi++;
		}
	      max_buf[nmax_buf][nmax_bufi] = '\0';
	      nmax_buf++;

	    }
	  else if (j * 2 + 2 > max)

	    {
	      max = j * 2 + 2;
	      x = p[i - j];
	      y = p[i + j + 1];
	      nmax_si = 0;
	      nmax_s = 0;
	      for (k = i - j; k <= i + j + 1; k++)
		{
		  max_s[nmax_s][nmax_si] = s[k];
		  nmax_si++;
		}
	      max_s[nmax_s][nmax_si] = '\0';
	      nmax_s++;

	      nmax_bufi = 0;
	      nmax_buf = 0;
	      for (k = p[i - j]; k <= p[i + j + 1]; k++)
		{
		  max_buf[nmax_buf][nmax_bufi] = buf[k];
		  nmax_bufi++;
		}
	      max_buf[nmax_buf][nmax_bufi] = '\0';
	      nmax_buf++;

	    }
	}
/*
      for (j = x; j <= y; j++)
	printf ("%c", buf[j]);
      printf ("\n");
*/

    }
  printf ("max = %d\n", max);
  for (i = x; i <= y; i++)
    printf ("%c", buf[i]);
  printf ("\n");

  for (i = 0; i < nmax_s; i++)
    printf ("%d:%s\n", i, max_s[i]);

  for (i = 0; i < nmax_buf; i++)
    printf ("%d:%s\n", i, max_buf[i]);
  return 0;
}
