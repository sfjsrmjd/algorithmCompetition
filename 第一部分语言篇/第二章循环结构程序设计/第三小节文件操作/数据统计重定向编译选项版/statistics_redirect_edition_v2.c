/* 编译时使用-DLOCAL，如果想从文件得到输入，
 * 如果想从键盘得到输入，那么就在编译时不要加这个选项 */
#include<stdio.h>
#define INF 1000000000
int main(){
#ifdef LOCAL
  freopen("data.in", "r", stdin);
  freopen("data.out", "w", stdout);
#endif
  int x, n = 0, min = INF, max = -INF, s = 0;
  while(scanf("%d", &x) == 1) {
    s += x;
    if(x < min) min = x;
    if(x > max) max = x;
/*
    printf("x = %d, min = %d, max = %d\n", x, min, max);
*/
    n++;
  }
  printf("%d %d %.3lf\n", min, max, (double)s/n);
  return 0;
}
