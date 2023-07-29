// Area ond perimeter of square

#include <stdio.h>
int main ()
{
	int side, Area, Perimeter;
	printf("Enter the side :");
	scanf("%d", &side);
	Area = side * side;
	Perimeter = 4 * side;
	printf("Area of a square is :%d\n", Area);
	printf("Perimeter of a square is :%d\n", Perimeter);
	return 0;
}
	
