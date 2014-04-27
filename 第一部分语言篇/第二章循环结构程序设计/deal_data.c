#include<stdio.h>
int main(){
  int x, n = 0, min, max, s = 0;
  printf("min=%d max=%d\n", min, max);
  while(scanf("%d", &x) == 1) {
    s += x;
    if(x < min) min = x;
    if(x > max) max = x;
    n++;
  }
  printf("min=%d max=%d mean=%.3lf\n", min, max, (double)s/n);
  return 0;
}
