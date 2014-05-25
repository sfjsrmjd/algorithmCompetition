#include<stdio.h>
int main(){
  int a, b, c, x, y, z;
  printf("请输入三个整数（我们将为你从小到大排序它们）:");
  scanf("%d%d%d", &a, &b, &c);
  //x = a <? b <? c;
  //find min
  x = a; if(b < x) x = b; if(c < x) x = c;
  //find max
  z = a; if(b > z) z = b; if(c > z) z = c;
  //compute middle
  y = a + b + c - x - z;
  printf("我们的排序结果是：");
  printf("%d %d %d\n", x, y, z);
  return 0;
}
