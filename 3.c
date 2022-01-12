# include <stdio.h>

int	main(void)
{
        
	int	a;
        int 	b;
	int	c;
	int	d;

	scanf("%d %d %d %d", &a,&b,&c,&d);
          a=b-c+d;
	  a=a%24;

                     
        printf ("%d\n  ",a );
	return (0);
}
