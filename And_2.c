#include <stdio.h>
int main()
{
	int a,b,c,stmt_1,stmt_2;
	float d;
	printf("Enter A value is :");
	scanf("%d",&a);
	printf("\nEnter B value is :");
	scanf("%d",&b);
	printf("\nEnter C value is :");
	scanf("%d",&c);
	printf("\nEnter D value is :");
	scanf("%f",&d);
	stmt_1 = a<b;
	stmt_2 = c<d;
	printf("output of stmt_1 is :%d\n",stmt_1);
	printf("output of stmt_2 is :%d\n",stmt_2);
	printf("stmt_1 && stmt_2 is :%d",stmt_1 && stmt_2);	
	return 0;
}