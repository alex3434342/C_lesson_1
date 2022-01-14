#include <stdio.h>

int	main(void)
{
        
	int	time_b;
        int 	utc_a;
	int	utc_b;
	int	time_a;

	scanf("%d %d %d", &utc_a, &utc_b, &time_a);
	time_b = time_a - utc_a + utc_b;
        time_b = time_b % 24;
	printf("%d", time_b);
	return (0);
}
