// Find the maximum number between between two number
#include <stdio.h>
int main()
{
	int A;
	printf("Enter the value of A");
	scanf("%d", &A);
	int B;
	printf("Enter the value of B");
	scanf("%d", &B);
	if(A > B)
	{
		printf("A is maximum");
	}
	else
	{
		printf("B is maximum");
	}
	return 0;
}
