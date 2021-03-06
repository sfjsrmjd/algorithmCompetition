/*有许多知识需要补充：
 * 异或运算是mod2加法，这个运算构成一个加法交换群！
 * 0^0=0,0^1=1,1^0=1,1^1=0
 * 相当于
 * 0mod2+0mod2=0mod2
 * 0mod2+1mod2=1mod2
 * 1mod2+0mod2=1mod2
 * 1mod2+1mod2=2mod2=0mod2.*/
#include<stdio.h>
int
main (void)
{
  int a, b;
  printf("请输入两个整数：");
  scanf ("%d%d", &a, &b);
/* 
  a = a ^ b;
  b = b ^ a;//由于^运算符合交换律，这里用b=a^b也是可以的，
  //只不过用b=b^a可以使用b^=a这个简化表达式!

  a = a ^ b;
   */
  //a=a^b^(b=a);//在-Wall -Wextra下程序不能编译通过！
  /*
  b=a;
  a=a^b^b;
  2 8 得到 2 2
  所以可以判定
  a=a^b^(b=a)中中间的b使用的是b0所以a=a0^b0^(b=a0)
  而不是a=a0^a0^(b=a0)!
*/
  printf("两个整数被交换后的显示是：");
  printf ("%d %d\n", a, b);
  return 0;
}
