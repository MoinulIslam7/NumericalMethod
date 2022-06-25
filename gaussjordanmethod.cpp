#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int i,j,k,n;
    double arr[20][20],ratio=0,x[10];
    cout << "Enter the order of matrix: ";
    cin >> n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+1); j++)
        {
            printf("array_index[%d][%d]:", i,j);
            scanf("%lf",&arr[i][j]);
        }
    }
    for(i=1;i<=n-1;i++)
	 {
		  for(j=i+1;j<=n;j++)
		  {
			   ratio = arr[j][i]/arr[i][i];

			   for(k=1;k<=n+1;k++)
			   {
			  		arr[j][k] = arr[j][k] - ratio*arr[i][k];
			   }
		  }
	 }
    for(i=n;i>=1;i--)
	 {
		  for(j=i-1;j>=1;j--)
		  {
			   ratio = arr[j][i]/arr[i][i];

			   for(k=1;k<=n+1;k++)
			   {
			  		arr[j][k] = arr[j][k] - ratio*arr[i][k];
			   }
		  }
	 }
    cout << endl << "Solution is : " << endl;
    for(i=1; i<=n; i++)
    {
        x[i]=arr[i][n+1]/arr[i][i];
        printf("\n x%d=%lf\n",i,x[i]);
    }
}
