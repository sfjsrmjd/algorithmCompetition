#include<stdio.h>
#include<time.h>
#define MAXN 10000000 + 10
//#define MAXN 100 + 10
int main(){
  int i, x, n = 0;
int a[MAXN];
  while(scanf("%d", &x) == 1)
    a[n++] = x;
  for(i = n-1; i >= 1; i--)
    printf("%d ", a[i]);
  printf("%d\n", a[0]);
  printf("Time used = %lf\n",(double)clock()/CLOCKS_PER_SEC);
  return 0;
}
