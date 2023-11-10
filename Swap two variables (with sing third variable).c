#include<stdio.h>

main()
{
	int a = 647, b = 52, c;
	
	c=a;
	a=b;
	b=c;
	
	printf("A = %d\n",a);
	printf("B = %d",b);
}