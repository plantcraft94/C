#include <stdio.h>

void sort_if(int a,int b,int c, int d)
{
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	if (b > c)
	{
		int temp = b;
		b = c;
		c = temp;
	}
		
	if (c > d)
	{
		int temp = c;
		c = d;
		d = temp;
	}
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	if (b > c)
	{
		int temp = b;
		b = c;
		c = temp;
	}
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	printf("%d %d %d %d",a,b,c,d);
}

int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	sort_if(a,b,c,d);
	return 0;
}