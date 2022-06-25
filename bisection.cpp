#include<bits/stdc++.h>
using namespace std;
double fun( double x)
{
    return pow(x,3)-x-4;
}
double bisect(double a, double b)
{
    return (a+b)/2;
}
int main()
{
    double xl, xu, error, AR;
    printf("Enter first value : ");
    scanf("%lf", &xl);
    printf("Enter second value : ");
    scanf("%lf", &xu);
    printf("  a\t\t b \t\t AR \t\t f(AR)\n");
    if(fun(xl)*fun(xu)>0)
    {
        printf("incorrect Input\n");
    }
    else
    {
        int i=0;
        error=0.001;
        while(1)
        {
            i++;
            AR=bisect(xl, xu);
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
        printf("approximate root is : %.3lf\n", AR);
        printf("No. of iteration : %d\n", i);
    }
    return 0;

}
