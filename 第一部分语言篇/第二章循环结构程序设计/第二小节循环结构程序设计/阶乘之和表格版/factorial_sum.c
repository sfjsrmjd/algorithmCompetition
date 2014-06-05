/* n          20       40       80      160     1600     6400    12800    25600    51200 
 * 答案   820313   940313   940313   940313   940313   940313   940313   940313   940313 
 * 时间 0.000287 0.000295 0.000326 0.000449 0.013117 0.213279 1.009583 4.195136 16.933283 rm a.out
 * 这是我在这个程序中实现的表格，我做出了一个很棒的测试！为以后写程序积累了经验！ */
#include<stdio.h>
#include<time.h>
#define TABLE 9
int table_n[TABLE];
int table_answer[TABLE];
double table_time[TABLE];
int
main ()
{
  const int MOD = 1000000;
  int i, j, n, S;
  int nTABLE=9;
  table_n[0] = 20;
  table_n[1] = 40;
  table_n[2] = 80;
  table_n[3] = 160;
  table_n[4] = 1600;
  table_n[5] = 6400;
  table_n[6] = 12800;
  table_n[7] = 25600;
  table_n[8] = 51200;
  int k;
  for (k = 0; k < nTABLE; k++)
    {
      n = table_n[k];
      S = 0;
      for (i = 1; i <= n; i++)
	{
	  int factorial = 1;
	  for (j = 1; j <= i; j++)
	    factorial = (factorial * j % MOD);
	  S = (S + factorial) % MOD;
	}
      table_answer[k] = S;
      table_time[k] = (double) clock () / CLOCKS_PER_SEC;
    }

  printf ("\nn    ");
  for (k = 0; k < nTABLE; k++)
    printf ("%8d ", table_n[k]);
  printf ("\n答案 ");
  for (k = 0; k < nTABLE; k++)
    printf ("%8d ", table_answer[k]);
  printf ("\n时间 ");
  for (k = 0; k < nTABLE; k++)
    printf ("%lf ", table_time[k]);
  return 0;
}
