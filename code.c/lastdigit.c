// print the last digit of a number
#include <stdio.h>
int main()
{
	int a,lD;
	printf("Enter the value of a");
	scanf("%d", &a);
	lD = a % 10;
	printf("last digit is:%d", lD);
	return 0;
}
