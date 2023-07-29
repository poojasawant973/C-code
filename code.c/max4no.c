// Find the maximum between 4 number

#include <stdio.h>
int main()
{
	int a, max1;
	printf("Enter the value of a :");
	scanf("%d", &a);
	int b, max2;
	printf("Enter the value of b :");
	scanf("%d", &b);
	int c;
	printf("Enter the value of c :");
	scanf("%d", &c);
	int d;
	printf("Enter the value of d :");
	scanf("%d", &d);
	if (a > b)
	{
		max1 = a;
	}
	else
	{
		max1 = b;
	}
	if (c > d)
	{
		max2 = c;
	}
	else
	{
		max2 = d;
	}
	if (max1 > max2)
	{
		printf("max in 4 no :%d", max1);
	}
	else
	{
		printf("max in 4 no :%d", max2);
	}
	return 0;
}
