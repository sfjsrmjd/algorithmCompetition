#include<stdio.h>
int
main (void)
{
  int a, b;
  scanf ("%d%d", &a, &b);
  //a^=b^=a^=b;
//It is separated from the binding on the binary level
  //a=1011,b=0101
  a = a ^ b;
  //a=1011 ^ 0101
  //a=1110 ,b=0101
  b = b ^ a;
  //b=0101 ^ 1110
  //a=1110 ,b=1011
  a = a ^ b;
  //a=1110 ^ 1011;
  //a=0101 ,b=1011

  printf ("%d %d\n", a, b);
  return 0;
}
