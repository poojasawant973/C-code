#include <stdio.h>
int main()
{
	int l;
	printf("Enter the length");
	scanf("%d", &l);
	int b, Area , Perimeter;
	printf("Enter the bredth ");
	scanf("%d", &b);
	Area = l * b;
	Perimeter = (2*(l + b));
	printf("Area of rectangle = %d\n", Area);
	printf("Perimeter of rectangle = %d\n", Perimeter);
	return 0;
	
}
