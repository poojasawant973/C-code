// Draw a flowchart to accept the items code and stock on hand and the rate per unit of stock in a department store and display the stock value of the store.

#include <stdio.h>
int main()
{
	int rate, stockValue;
	printf("Enter the rate : ");
	scanf("%d", &rate);
	int SOH;
	printf("Enter the SOH : ");
	scanf("%d", &SOH);
	stockValue = SOH * rate;
	printf("%d", stockValue);
	return 0;
}
