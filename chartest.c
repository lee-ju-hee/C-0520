#include <stdio.h>
int main()
{
	char ch = '0';
	char ch2 = 13;
	
	printf("1234567890");
	printf("\b\b\b ttt\n");
	printf("%c %d", ch, ch);
	printf("%c %d\n", ch2, ch2);
	
	//\n->개햍문자 ->CR + LF-> CR = 13, LF = 10 
	return 0;
}
