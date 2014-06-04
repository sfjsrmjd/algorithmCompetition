#include<stdio.h>
int
main (void)
{
  int n;
  printf("请输入购买衣服的件数：");
  scanf ("%d", &n);
  if (n * 95 >= 300)
    {
      printf("您的消费已满300元，可打八五折，未打折前，每件衣服的价钱是95元，所以您需要支付：");
      printf ("%.2lf\n", n * 95 * 0.85);
    }
  else
    {
      printf("您的消费未满300元，没有打折优惠，每件衣服的价钱是95元，所以您需要支付：");
      printf ("%.2lf\n", n * 95.0);
    }
  return 0;
}
