#include<bits/stdc++.h>
#include<math.h>
using namespace std;
double fun(double x)
{
    return (x*x*x-7*x+3);
}
double satisfy_fun(double x)
{
    return ((-3) / ((x*x)-7));
}
int main()
{
	 int step=1, N;
	 double x0, x1, error=0.000001;
	 cout << "Enter initial value: " << endl;
	 cin >> x0;
	 cout << "Enter maximum iteration: " << endl;
	 cin >> N;
	 cout <<"\nStep\tx0\t\tfun(x0)\t\tx1\t\tfun (x1)\n";
	 do
	 {
		  x1 = satisfy_fun(x0);
		  printf("%d\t%lf\t%lf\t%lf\t%lf\n",step, x0, fun(x0), x1, fun(x1));
		  step = step + 1;
		  if(step>N)
		  {
			   printf("Not Convergent.");
			   break;
		  }
		  x0 = x1;
	 }while( fabs(fun(x1)) > error);

	 printf("\n Approximate Root is %lf\n", x1);
}
