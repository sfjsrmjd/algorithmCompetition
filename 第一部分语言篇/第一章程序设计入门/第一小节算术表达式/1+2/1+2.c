/*
 * =====================================================================================
 *
 *       Filename:  1+2.c
 *
 *    Description:  我想用一个更直观的名字来命名文件，文件1+2.c比add.c更直观，更多的表达
 *    了程序的目的。
 *
 *        Version:  1.0
 *        Created:  2014年05月03日 23时06分18秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  何伟伟 (), 1830973318@qq.com
 *   Organization:  
 *
 * =====================================================================================
 */


#include<stdio.h>
#include<math.h>
int
main (void)
{
//我想以后我的程序在屏幕上输出更多的汉字！
  printf ("这是计算机计算出来的1+2的结果： ");
  printf ("%d\n", 1 + 2);

  printf ("实验一：输出3-4的结果： ");
  printf ("%d\n", 3 - 4);
  printf ("%d\n", 5 * 6);
  printf ("%d\n", 8 / 4);
  printf ("%d\n", 8 / 5);
  printf ("%d\n", (-8) / 5);
//why there use %lf, why not use %f?
  printf ("%1lf\n", 8.0 / 5.0);
  printf ("%2lf\n", 8.0 / 5.0);
  printf ("%.1lf\n", 8.0 / 5.0);
  printf ("%.2lf\n", 8.0 / 5.0);
  printf ("%lf\n", 8.0 / 5.0);
printf("there use %%f instead of %%lf\n");
  printf ("%1f\n", 8.0 / 5.0);
  printf ("%2f\n", 8.0 / 5.0);
  printf ("%.1f\n", 8.0 / 5.0);
  printf ("%.2f\n", 8.0 / 5.0);
  printf ("%f\n", 8.0 / 5.0);

  //printf ("%.1lf\n", 8/5);//output format error
  //printf ("%d\n", 8.0/5.0);//output format error
  printf("%.8lf\n",1+2*sqrt(3)/(5-0.1));
  printf("%.8lf\n",sqrt(9.0));
  return 0;
}
