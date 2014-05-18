#include<stdio.h>
#include<math.h>
int
main (void)
{
  const double pi = 4.0 * atan (1.0);
  double r, h, s1, s2, s;
  printf("请输入圆柱体的底面半径和高： ");
  scanf ("%lf%lf", &r, &h);
  s1 = pi * r * r;
  s2 = 2 * pi * r * h;
  s = s1 * 2.0 + s2;
  printf ("该圆柱体的表面积是%.3lf\n", s);

  s1 = M_PI * r * r;
  s2 = 2 * M_PI * r * h;
  s = s1 * 2.0 + s2;
  printf ("该圆柱体的表面积是%.3lf\n", s);

  printf ("我想看一下两种圆周率的差别：\n");
  printf("由M_PI给出的圆周率是：%lf\n",M_PI);
  printf("由4.0*atan(1.0)给出的圆周率是：%lf\n",pi);
  //测试结果是两者给出的圆周率是相同的！
  return 0;
}
