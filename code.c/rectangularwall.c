//area of four walls of a rectangle room

#include <stdio.h>
int main()
{
	int h;
	printf("Enter the height");
	scanf("%d", &h);
	int l;
	printf("Enter the length");
	scanf("%d", &l);
	int w,Area;
	printf("Enter the width");
	scanf("%d", &w);
	Area = (4 *(l + w + h));
	printf("Area of 4 wall is %d :", Area);
	return 0;
}
	
	
	
