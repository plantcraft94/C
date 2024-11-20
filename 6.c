#include <stdio.h>

int main()
{
	int a[10];
	int giatrilonnhat;
	for (int i = 0; i < 10; i++)
	{
		int n;
		scanf("%d", &n);
		a[i] = n;
	}
	
	
	for (int i = 0; i < 10; i++)
	{
		if (giatrilonnhat < a[i])
		{
			giatrilonnhat = a[i];
		}
		
	}
	printf("%d", giatrilonnhat);
	
	return 0;
}