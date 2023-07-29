// lateral surface area and total surface area of cuboid

#include <stdio.h>
int main()
{
	int l, lsa, tsa;
	printf("enter length");
	scanf("%d", &l);
	int b;
	printf("enter the breadth");
	scanf("%d", &b);
	int h;
	printf("enter the height");
	scanf("%d", &h);
	lsa = (2*(l+b)*h);
	tsa = ((2*(l*b)+ (l*h) + (b*h)));
	printf("lateral surface area of cuboid : %d\n", lsa);
	printf("total surface area of cuboid : %d\n", tsa);
	return 0;
}
