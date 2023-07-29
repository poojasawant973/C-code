// Constuct a flowchart to show how to obtain the area of triangle on the basis of the base and height

#include <stdio.h>
int main()
{
	int base, A;
	printf("Enter the base");
	scanf("%d", &base);
	int height;
	printf("Enter the height");
	scanf("%d", &height);
	A = ((base * height)/2);
	printf("Area_of_triangle :%d", A);
	return 0;
	
}
	
