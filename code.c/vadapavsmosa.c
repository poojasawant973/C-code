// A store sells vadapav and samosas. They want a system where they enter the no. of vadapav and samosa a customer buys and a will with the final price is automatically calculated and displayed. A vadapav cost is 12rs , while a samosa cost 15rs. Write a program to create such a system.

#include <stdio.h>
int main()
{
 	int v;
 	printf("Enter the number of vadapav :");
 	scanf("%d", &v);
 	int s, price;
 	printf("Enter the number of samosas : ");
 	scanf("%d", &s);
 	const int X = 15;
 	const int Y = 12;
 	price = ((X * v) + (Y * s));
 	printf("%d", price);
 	return 0;
 }
