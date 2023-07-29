// interchange the value of a and b

#include <stdio.h>
int main()
{
	int a;
	printf("Enter the value of a :");
	scanf("%d", &a);
	int b;
	printf("Enter the value of b :");
	scanf("%d", &b);
	a = b;
	b = a;
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}
