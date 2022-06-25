#include<bits/stdc++.h>
using namespace std;
double fun(double x)
{
    return (1/(1+(x*x)));
}
int main()
{
    int i,n;
    double x0,xn,h,y[20],x[20],sum=0;
    cout << "enter value of x0  xn and h and n\n";
    scanf("%lf%lf%lf%d",&x0,&xn,&h,&n);

    printf("\n Y values \n");
    for(i=0; i<=n; i++)
    {
        x[i]=x0+i*h;
        y[i]=fun(x[i]);
        printf("\nY%d = %lf\n",i,y[i]);
    }
    sum=fun(x0)+fun(xn);

    for(i=1;i<n;i++)
    {
        sum=sum+2*fun(x0+i*h);
    }
    printf("\n Value of integral is %lf \n",(h/2)*sum);
}
