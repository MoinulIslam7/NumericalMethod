#include<bits/stdc++.h>
#include<math.h>
using namespace std;
double fun(double x)
{
    return 2*(x*x*x*x*x) - cos(x)- exp(x);
}
double derivative_fun(double x)
{
    return 10*(x*x*x*x) + sin(x) - exp(x);
}
int main()
{
    int itr, max_itr;
    double h, x0, x1, error=0.00001;
    cout <<"\nEnter x0 and maximum iterations" << endl;
    cin>> x0 >> max_itr;
    cout <<"\nStep\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n";
    for (itr=1; itr<=max_itr; itr++)
    {
        h=fun(x0)/derivative_fun(x0);
        x1=x0-h;
        printf("%d\t%lf\t%lf\t%lf\t%lf\n\n",itr, x0, fun(x0), derivative_fun(x0),x1);
        printf("\t\tAt Iteration no. %3d, x = %.6lf\n\n", itr, x1);
        if (fabs(h) < error)     ///fabs for return absolute value
        {
            printf("After %3d iterations, root = %.6lf\n", itr, x1);
            return 0;
        }
        x0=x1;
    }
    printf(" The required solution does not converge or iterations are insufficient\n");
    return 0;
}
