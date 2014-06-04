/*
 * =====================================================================================
 *
 *       Filename:  printf_statement_output_experiment.c
 *
 *    Description:  我意外把这个文件的源文件删掉了，
 *    但我也不知道如何用git把那个文件恢复过来！只好重写一个
 *
 *        Version:  1.0
 *        Created:  2014年06月01日 20时58分10秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  何伟伟 (), 1830973318@qq.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include<stdio.h>

int main(void) {

printf("实验C1:\n");
printf("%d %d",1+2,3+4);

printf("实验C2:\n");
printf("%%d\n");

printf("实验C3:\n");
printf("\\n\n");

printf("实验C4:\n");
//我只能以我现有的c语言知识来回答这个问题，让我探索，我也知道自己能力有限！
printf("a\tb\rc\n");

//想看一下\r的作用！
int i;
for (i=0;i<10;i++) {
printf("\r%d\r%d\n",i,i+1);

}

return 0;
}
