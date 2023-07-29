// check whether negative, positive or zero
#include <stdio.h>
int main()
{
	int N;
	printf("Enter the Number");
	scanf("%d", &N);
	if(N > 0)
	{
		printf("Positive");
	}
	else if(N == 0)
	{
		printf("Zero");
	}
	else
	{
		printf("Negative");
	}
	return 0;
}
