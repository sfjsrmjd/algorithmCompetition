#include<stdio.h>
#include<math.h>
int
main (void)
{
  double x1, y1, x2, y2;
  printf("请输入四个浮点数：");
  scanf ("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
  printf("在平面坐标系中点（%lf，%lf）到点（%lf，%lf）的距离是：",x1,y1,x2,y2);
  printf ("%lf\n", sqrt ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));
  return 0;
}
