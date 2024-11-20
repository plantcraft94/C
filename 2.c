#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	int sonhonhat = 1000000000;
	while (t--)
	{
		int n;
		scanf("%d", &n);
		if (sonhonhat > n)
		{
			sonhonhat = n;
		}
		
	}
	printf("%d",sonhonhat);
}