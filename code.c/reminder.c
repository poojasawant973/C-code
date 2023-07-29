//Find the reminder when one number is divided by the other
#include <stdio.h>
int main()
{
	int a,b, rem;
	printf("Enter the value of a & b");
	scanf("%d%d", &a, &b);
	rem = a % b;
	printf("%d", rem);
	return 0;
}
