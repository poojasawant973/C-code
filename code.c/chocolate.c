//calculate total cost of chocolates

#include <stdio.h>
int main()
{
	int N;
	printf("Enter the number of chocolates");
	scanf("%d", &N);
	int C;
	printf("Enter the cost of chocolates");
	scanf("%d", &C);
	int total_chocolates = N * C;
	printf("total_cost_of_chocolate%d :", total_chocolates);
	return 0;
}
	
	
