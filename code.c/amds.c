//Construct a flowchart add , substract , divide and multiply two integer a and b

#include <stdio.h>
int main()
{
	int a, add, sub, multiply, divide;
	printf("Enter the value of a");
	scanf("%d", &a);
	int b;
	printf("Enter the value of b");
	scanf("%d", &b);
	add = a + b;
	sub = a - b;
	multiply = a * b;
	divide = a/b;
	printf("addition of a & b :%d\n", add);
	printf("substration of a & b :%d\n", sub);
	printf("multiply of a & b :%d\n", multiply);
	printf("divide of a & b :%d\n", divide);
	return 0;
}
	
	
