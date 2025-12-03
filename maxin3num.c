//maximum in three numbers
#include<stdio.h>
int main(void)
{
	int a, b, c;
	printf("Enter Any Three Numbers:");
	scanf("%d %d %d", &a, &b, &c);
	if (a>b)
	{
		if (a>c)
		  printf("%d is Maximum", a);
		else
		  printf("%d is Maximum", c);  
	}
	else
	    {
	    	if (b>c)
	    	 printf("%d is Maximum", b);
	    	else
			 printf("%d is Maximum", c);
		}
}
