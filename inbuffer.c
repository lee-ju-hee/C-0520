#include <stdio.h>
int main()
{
	char string[5];
	char c, d;
	
	scanf("%s", string);
	scanf(" %c", &d);
	
	printf("%s\n", string);
	printf("!!%c!!\n", c);
	
	return 0;
}
