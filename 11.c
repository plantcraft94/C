#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	int count = 0;
	fgets(str, sizeof(str), stdin); // nhập xâu chứa dấu cách, scanf chỉ nhập được xâu không có dấu cách
	
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == 'A')// so sánh với 'A' không phải "A"
		{
			count += 1;
		}
		
	}
	
	printf("%d", count);
	
	return 0;
}