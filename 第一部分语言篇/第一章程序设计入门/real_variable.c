#include<stdio.h>
int
main (void)
{
//format %f,%lf,%g,%lg,%le,%e,%a,%la expects argument of type double
  float a = 8.3;
  double b = 8.2;
  long double c = 8.1;
/*
  printf ("f:%f %f %f\n", a, b, c);
  printf ("lf:%lf %lf %lf\n", a, b, c);
  printf ("g:%g %g %g\n", a, b, c);
  printf ("lg:%lg %lg %lg\n", a, b, c);
  printf ("le:%le %le %le\n", a, b, c);
  printf ("e:%e %e %e\n", a, b, c);
  printf ("a:%a %a %a\n", a, b, c);
  printf ("la:%la %la %la\n", a, b, c);
*/
  return 0;
}
