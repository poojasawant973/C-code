#include <stdio.h>
int main()
{
	int P, N, I, T;
	printf("Enter the value of P & R & I");
	scanf("%d%d%d", &P, &N, &I);
	T = (P *(I/100 + 1)^N);
	printf("%d", T);
	return 0;
}
	
