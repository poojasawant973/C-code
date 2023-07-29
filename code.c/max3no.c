// maximum between 3 number
#include <stdio.h>
int main()
{
	int A,max;
	printf("Enter the value of A");
	scanf("%d", &A);
	int B;
	printf("Enter the value of B");
	scanf("%d", &B);
	int C;
	printf("Enter the value of C");
	scanf("%d", &C);
	if(A > B)	
	{
		max = A;
	}
	else 
	{
		max = B;
	}
	if (max > C)
	{
		printf("Maximum number is:%d", max);
	}
	else
	{
		printf("Maximum number is:%d", C);
	}
	return 0;
}
		
