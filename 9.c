#include <stdio.h>

int main()
{
	int t;
	int count = 0;
	scanf("%d",&t);
	while (t--)
	{
		int n;
		scanf("%d",&n);
		if (n > 10)
		{
			count++;
		}
		
	}
	printf("%d",count);
	
	
	return 0;
}