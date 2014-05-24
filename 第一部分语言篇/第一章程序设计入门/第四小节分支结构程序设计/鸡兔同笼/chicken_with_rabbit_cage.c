/* 鸡兔同笼是中国古代的数学名题之一。大约在1500年前，《孙子算经》中就记载了这个有趣的问题。书中是这样叙述的：“今有雉兔同笼，上有三十五头，下有九十四足，问雉兔各几何？”这四句话的意思是：有若干只鸡兔同在一个笼子里，从上面数，有35个头,从下面数，有94只脚。问笼中各有几只鸡和兔？
 * 雉在古语里是鸡的意思！雉的发音是zhi,平声。
 * 这里三十五头不仅代表鸡和兔的总头数是35,而且代表鸡和兔的总数量是35
 * 所以古代的问题中，n=35,m=94
 * 算这个有个最简单的算法。
 * （总脚数-总头数×鸡的脚数）÷（兔的脚数-鸡的脚数）=兔的只数
 * （94－35×2）÷2=12(兔子数) 总头数（35）－兔子数（12）=鸡数（23）
 * 解释：让兔子和鸡同时抬起两只脚，这样笼子里的脚就减少了头数×2只，由于鸡只有2只脚，所以笼子里只剩下兔子的两只脚，再÷2就是兔子数。
 * 这个算法是合适的！
 * */
#include<stdio.h>
int
main (void)
{
  int a, b, n, m;
  printf("请输入鸡和兔的总数量和总腿数：");
  scanf ("%d%d", &n, &m);
  a = (4 * n - m) / 2;
  b = n - a;
  if (m % 2 == 1 || a < 0 || b < 0) {
    //printf ("No answer\n");
    printf ("问题没有解答\n");
  }else {
    printf("鸡的数目和兔的数目分别是：");
    printf ("%d %d\n", a, b);
  }
  return 0;
}
