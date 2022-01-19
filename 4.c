#include <stdio.h>

int	main(void)
{
	int	n;
	int	s;
	int	o;
	int	purchase_price;
	int	price;
	int	profit;

	scanf("%d %d %d", &n, &s, &o);
	purchase_price = n - (n * s / 100);
	price = purchase_price * o / 100 + purchase_price;
	profit = price - purchase_price;
	printf("%d", profit); 
	return (0);
}
