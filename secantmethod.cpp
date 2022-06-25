#include<bits/stdc++.h>
using namespace std;
double fun(double x)
{
    return x*x*x-x-1;
}
int main()
{
    int n;
    int arr[10][10];
    int X[n];
    cout << "enter the order of matrix : " << endl;
    cin >> n;
    int i,j,k;
    double ratio1=0;
    double sum=0;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n+1; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            ratio1 = arr[j][i] / arr[i][i];
            for(k=1; k<=n+1; k++)
            {
                arr[j][k] = arr[j][k] - arr[i][k] * ratio1;
            }
        }
    }
    X[n] = arr[n][n+1] / arr[n][n];
    for(i=1; i<=n-1; i--)
    {
        sum = 0;
        for(j=i+1; j<=n; j++)
        {
            sum = sum + arr[i][j]*X[j];
        }
        X[i] = (arr[i][n+1] -sum)/ arr[i][i];
    }
    cout << endl << "Solution are : " << endl;
    for(i=1; i<=n; i++)
    {
        printf("X[%d] : %lf", i, X[i]);
    }
}
