/*
 * =====================================================================================
 *
 *       Filename:  the_experimental_data_types.c
 *
 *    Description:  专门处理作者列举出来的实验！
 *
 *        Version:  1.0
 *        Created:  2014年06月01日 11时56分31秒
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
int main(void) {
  printf("实验A1:\n");
  printf("11111*11111的值是%d\n",11111*11111);
  //printf("111111*111111的值是%d\n",111111*111111);//已经超出int的表达范围
  //printf("111111111*111111111的值是%d\n",111111111*111111111);

/* 
 * 11111*11111产生的是int数据，不是long int 数据！
  printf("11111*11111的值是%ld\n",11111*11111);
  printf("111111*111111的值是%ld\n",111111*111111);
  printf("111111111*111111111的值是%ld\n",111111111*111111111);
 */

  printf("用long int来输出这些超过int表达范围的整数！\n");
  printf("11111*11111的值是%ld\n",11111L*11111L);
  printf("111111*111111的值是%ld\n",111111L*111111L);
  printf("111111111*111111111的值是%ld\n",111111111L*111111111L);


  printf("实验A2:\n");
  printf("11111.0*11111.0的值是%f\n",11111.0*11111.0);
  printf("111111.0*111111.0的值是%f\n",111111.0*111111.0);
  printf("11111111.0*11111111.0的值是%f\n",11111111.0*11111111.0);

  printf("实验A3:\n");
  printf("sqrt(-10)的值是%f(%%f版)\n",sqrt(-10));
  printf("sqrt(-10)的值是%lf(%%lf版)\n",sqrt(-10));

  printf("实验A4:\n");
  printf("1.0/0.0的值是%f\n",1.0/0.0);
  printf("-1.0/0.0的值是%f\n",-1.0/0.0);
  printf("0.0/0.0的值是%f\n",0.0/0.0);

  printf("实验A4:\n");
  //printf("%d\n",1/0);//division by zero是不允许的！
  //printf("%f\n",1/0);//division by zero是不允许的！同时1/0得到的是int，
  //%f需要的是double，数据类型不匹配！
  //printf("%d\n",0/0);//division by zero是不允许的！
  //floating point exception!浮点数例外！



  return 0;
}
