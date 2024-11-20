#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	int solonnhat = -1000000000;
	while (t--)
	{
		int n;
		scanf("%d", &n);
		if (solonnhat < n)
		{
			solonnhat = n;
		}
		
	}
	printf("%d",solonnhat);
}