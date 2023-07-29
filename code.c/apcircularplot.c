// find the area of perimeter of a circular plot

#include <stdio.h>
int main()
{
	int r, area, perimeter;
	printf("Enter the radius of circular plot");
	scanf("%d", &r);
	area = (3.14 * (r * r));
	perimeter = (2 * (3.14 * r));
	printf("Area of circular plot is %d\n :", area);
	printf("Perimeter of circular plot is %d\n :", perimeter);
	return 0;
}
	
