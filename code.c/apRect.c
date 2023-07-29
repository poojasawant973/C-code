// find the area and perimeter of square

#include <stdio.h>
int main()
{
	int S, A, P;
	printf("Enter the value of Side");
	scanf("%d",&S);
	A = (S * S);
	P = (4 * A);
	printf("Area of a square %d\n", A);
	printf("Perimeter of a square %d\n", P);
	return 0;
}
	
