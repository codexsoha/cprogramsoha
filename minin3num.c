//minimum in three numbers
#include<stdio.h>
int main(void)
{
	int a, b, c;
	printf("Enter Any Three Numbers:");
	scanf("%d %d %d", &a, &b, &c);
	if (a<b)
	{
		if (a<c)
		  printf("%d is Minimum", a);
		else
		  printf("%d is Minimum", c);  
	}
	else
	    {
	    	if (b<c)
	    	 printf("%d is Minimum", b);
	    	else
			 printf("%d is Minimum", c);
		}
}
