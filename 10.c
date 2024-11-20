#include <stdio.h>

int main()
{
	int t;
	
	int count = 0;
	scanf("%d",&t);
	int t1 = t;
	while (t--)
	{
		int n;
		scanf("%d",&n);
		count += n;
		
	}
	printf("%lf",(double)count/t1);
	
	
	return 0;
}