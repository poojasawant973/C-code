// calculate the volume of cuboid

#include <stdio.h>
int main()
{
	int l, v;
	printf("Enter the length");
	scanf("%d", &l);
	int b;
	printf("Enter the bredth");
	scanf("%d", &b);
	int h;
	printf("Enter the height");
	scanf("%d", &h);
	v = (l * b *h);
	printf("Volume of cuboid %d", v);
	return 0;
}
	
	
