#include<stdio.h>
#include<time.h>
int main(){
  const int MOD = 1000000;
  int i, j, n, S = 0;
  scanf("%d", &n);
  if(n>25) n=25;
  for(i = 1; i <= n; i++){
    int factorial = 1;
    for(j = 1; j <= i; j++)
      factorial = (factorial * j % MOD);
    S = (S + factorial) % MOD;
  }
  printf("%d\n", S);
  printf("Time used = %.2lf\n", (double)clock() / CLOCKS_PER_SEC);
  printf("Time used = %lf\n", (double)clock() );
  printf("Time used = %ld\n", clock() );
  return 0;
}
