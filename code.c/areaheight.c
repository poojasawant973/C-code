//Different between area of triangle and it's height

#include <stdio.h>
int main()
{
	int b, A;
	printf("Enter the base");
	scanf("%d", &b);
	int h;
	printf("Enter the height");
	scanf("%d", &h);
	A = (((b * h) /2) - h);
	printf("%d", A);
	return 0;
}
	
