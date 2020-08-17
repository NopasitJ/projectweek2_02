#include<stdio.h>
int main()
{
	int i = 0;
	int a = 0;
	int b = 0;
	int ans = 0;
	int r;
	printf("Enter range of number : ");
	scanf_s("%d", &r);
	for (i = 1; i <= r; i++)
	{
		a = a + (i * i);
	}
	for (i = 1; i <= r; i++)
	{
		b = b + i;
	}
	b = (b * b);
	ans = b - a;
	printf("sum of square differnt is %d ", ans);
	return 0;
}