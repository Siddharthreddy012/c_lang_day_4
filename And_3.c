#include <stdio.h>
int main()
{
	int a = 60;
	int b = 30;
	int c = 70;
	printf("stmt_1 a<b is :%d\n",a<b);
	printf("stmt_2 b<c is :%d\n",b<c);
	printf("stmt_1 && stmt_2 is :%d\n",a<b && b<c);
	return 0;
}