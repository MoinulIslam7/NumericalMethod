#include<bits/stdc++.h>
using namespace std;
double f1(double x, double y, double z)
{
    return (95-11*y+4*z)/83;
}
double f2(double x, double y, double z)
{
    return (104-7*x-13*z)/52;
}
double f3(double x, double y, double z)
{
    return (71-3*x-8*y)/29;
}
int main()
{
 double x0=0,y0=0, z0=0, x1, y1, z1, e1, e2, e3, e;
 int count=1;
 printf("Enter tolerable error:\n");
 scanf("%lf", &e);

 printf("\nCount\tx\ty\tz\n");
 do
 {
  x1 = f1(x0,y0,z0);
  y1 = f2(x1,y0,z0);
  z1 = f3(x1,y1,z0);

  printf("%d\t%0.4lf\t%0.4lf\t%0.4lf\n",count, x1,y1,z1);

  e1 = fabs(x0-x1);
  e2 = fabs(y0-y1);
  e3 = fabs(z0-z1);

  count++;

  x0 = x1;
  y0 = y1;
  z0 = z1;
 }while(e1>e || e2>e || e3>e);

 printf("\nSolution: x=%0.3lf, y=%0.3lf and z = %0.3lf\n",x1,y1,z1);
 return 0;
}
