#include<stdio.h>
#include<math.h>
int main(void) {
  // experimental A1 and A2
  printf("%d\n",11111*11111);
  printf("%f\n",11111.0*11111.0);
  //printf("%d\n",111111*111111);
  printf("%ld\n",111111L*111111L);
  printf("%f\n",111111.0*111111.0);
  //printf("%d\n",111111111*111111111);
  printf("%ld\n",111111111L*111111111L);
  printf("%f\n",111111111.0*111111111.0);

  // experimental A3
  printf("%f\n",sqrt(-10));
  printf("%lf\n",sqrt(-10));
  //printf("%ld\n",sqrt(-10));//need double not int
  //printf("%d\n",sqrt(-10));

  // experimental A4
  printf("%f\n",1.0/0.0);
  printf("%f\n",0.0/0.0);

  // experimental A5
  //printf("%d\n",1/0);
  //printf("%f\n",1/0);

  return 0;
}
