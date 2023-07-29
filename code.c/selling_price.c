// calculate selling price of product

#include <stdio.h>
int main()
{
	int mrp;
	printf("Enter mrp");
	scanf("%d", &mrp);
	int discount,sellingPrice;
	printf("Enter Discount");
	scanf("%d", &discount);
	sellingPrice = mrp - discount;
	printf("selling price is :%d", sellingPrice);
	return 0;
}
	
