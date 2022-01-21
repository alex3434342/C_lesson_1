#include <stdio.h>

int	main(void)
{
	float	m;
	float	v;
	float	n;
	float	weight;
	float	carrying;
	int	capacity;

	scanf("%f %f %f", &m, &v, &n );
	weight = v * m ;
	carrying = n * 1000;
	capacity = carrying / weight;
  	printf("%d", capacity);	 
	return (0);
} 
