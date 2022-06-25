#include<bits/stdc++.h>
using namespace std;
double fun( double x)
{
    return x*x*x*x*x-3*x*x-100 ;
}
double false_position(double x0, double x1, double fx0, double fx1)
{
    return ((x0*fx1)-(x1*fx0))/(fx1-fx0);
}
int main()
{
    double xl, xu, error, AR;
    printf("Enter first value : ");
    scanf("%lf", &xl);
    printf("Enter second value : ");
    scanf("%lf", &xu);
    printf("  x0\t\t x1 \t\t AR \t\t f(AR)\n");
    if(fun(xl)*fun(xu)>0)
    {
        printf("incorrect Input\n");
    }
    else
    {
        int i=0;
        error=0.0001;
        while(1)
        {
            i++;
            AR=false_position(xl, xu, fun(xl), fun(xu));
            printf("%lf\t %lf \t %lf \t %lf\n", xl,xu,AR,fun(AR));
            if(abs(fun(AR))<error)
                break;
            else if(fun(AR)<0)
            {
                xl=AR;
            }
            else
            {
                xu=AR;
            }
        }
        printf("approximate root is : %.4lf\n", AR);
        printf("No. of iteration : %d\n", i);
    }
    return 0;

}
