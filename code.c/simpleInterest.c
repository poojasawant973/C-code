// find simple interest

#include <stdio.h>
int main()
{
	int P;
	printf("Enter the value of P");
	scanf("%d", &P);
	int R;
	printf("Enter the value of R");
	scanf("%d", &R);
	int N;
	printf("Enter the value of N");
	scanf("%d", &N);
	int simple_Interest = ((P * R * N)/100);
	printf("%d", simple_Interest);
	return 0;
}
	
