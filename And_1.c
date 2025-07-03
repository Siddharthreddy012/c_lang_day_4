#include <stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	printf("stmt_1 is a<b :%d\n",a<b);
	printf("stmt_2 is b<c :%d\n",b<c);
	printf("stmt_1 && stmt_2 is :%d\n",(a<b)&&b<c);
	return 0;
}