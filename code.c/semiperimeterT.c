#include <stdio.h>
int main()
{
	int a, b, c, sum;
	printf("Enter the value of a & b &c");
	scanf("%d%d%d", &a, &b, &c);
	sum = (a+b+c)/2 ;
	printf("Semiperimeter of a triangle is : %d", sum);
	return 0;
}
	
